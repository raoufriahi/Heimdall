<template>
    <div>
      <!-- Edit popup -->
        <el-dialog width="25%" :title="eltitle" :visible.sync="editPopup">
          <el-form class="el_form" ref="form" label-position='left' label-width="100px" size="small " :model="editform">
          
              <el-form-item :label="label.Type">
                <el-input v-model="editform.Type"></el-input>
              </el-form-item>
              <el-form-item :label="label.Name">
                  <el-input v-model="editform.Name"></el-input>
              </el-form-item>
              <el-form-item :label="label.Token">
                  <el-input v-model="editform.Token"></el-input>
              </el-form-item>
              <el-form-item :label="label.username">
                  <el-input v-model="editform.Username"></el-input>
              </el-form-item>
              <el-form-item :label="label.password">
                  <el-input v-model="editform.Password"></el-input>
              </el-form-item>
              <el-form-item :label="label.IP">
                  <el-input v-model="editform.IP"></el-input>
              </el-form-item>
              <el-form-item :label="label.Port">
                  <el-input v-model="editform.Port"></el-input>
              </el-form-item>
              <el-form-item :label="label.Audio">
                <el-switch
                  v-model="editform.Audio">
                </el-switch>
              </el-form-item>
              
          </el-form>
          <div slot="footer" class="dialog-footer button_table">
              <el-button class="form_butt1" @click="editPopup = false">{{$t("message.setting.Cancel")}}</el-button>
              <el-button class="form_butt" type="primary" @click="edityes">{{$t("message.setting.OK")}}</el-button>
          </div>
        </el-dialog>
        <!-- Added popup -->
        <el-dialog width="25%" :title="eltitle" :visible.sync="dialogFormVisible">
            <el-form class="el_form" ref="form" label-position='left' label-width="100px" size="small " :model="form">
            
                <el-form-item :label="label.Type">
                    <el-input v-model="form.Type"></el-input>
              </el-form-item>
              <el-form-item :label="label.Name">
                  <el-input v-model="form.Name"></el-input>
              </el-form-item>
              <el-form-item :label="label.Token">
                  <el-input v-model="form.Token"></el-input>
              </el-form-item>
              <el-form-item :label="label.username">
                  <el-input v-model="form.Username"></el-input>
              </el-form-item>
              <el-form-item :label="label.password">
                  <el-input v-model="form.Password"></el-input>
              </el-form-item>
              <el-form-item :label="label.IP">
                  <el-input v-model="form.IP"></el-input>
              </el-form-item>
              <el-form-item :label="label.Port">
                  <el-input v-model="form.Port"></el-input>
              </el-form-item>
              <el-form-item :label="label.Audio">
                <el-switch
                  v-model="form.Audio">
                </el-switch>
              </el-form-item>
                
            </el-form>
            <div slot="footer" class="dialog-footer button_table">
                <el-button class="form_butt1" @click="dialogFormVisible = false">{{$t("message.setting.Cancel")}}</el-button>
                <el-button class="form_butt" type="primary" @click="platformyes">{{$t("message.setting.OK")}}</el-button>
            </div>
        </el-dialog>
        <!-- two tables -->
            <!-- Add -->
            <div class="button_edi">
                <CButton class="form_butt" @click="addto" type="submit">Add</CButton>
                <CButton class="form_butt1" @click="deleteselect" type="submit">Delete</CButton>
            </div>
                <!-- Sheet -->
            <el-table
                :data="tableData1.filter(data => !search || data.Name.toLowerCase().includes(search.toLowerCase())).slice((currentPage1-1)*pageSize,currentPage1*pageSize)"
                @select='selectCall'
                @select-all='select_Call'
                stripe
                style="width: 100%" 
                v-loading="loading"
                element-loading-text="Editing, please do not switch pages"
                element-loading-background="rgba(0, 0, 0, 0)">
                <el-table-column
                    type="selection"
                    width="55">
                </el-table-column>
                <el-table-column
                    prop="index"
                    :label="label.Index"
                    width="100">
                </el-table-column>
                <el-table-column
                prop="Name"
                :label="label.Name">
                </el-table-column>
                <el-table-column
                prop="IP"
                :label="label.IP"
                min-width="140">
                </el-table-column>
                <el-table-column
                prop="Port"
                :label="label.Port">
                </el-table-column>
                <el-table-column
                prop="User"
                :label="label.User">
                </el-table-column>
                <el-table-column
                prop="Online"
                :label="label.Online">
                </el-table-column>
                <el-table-column
                prop="Type"
                :label="label.Type"
                min-width="140">
                </el-table-column>
                <el-table-column
                prop="Token"
                :label="label.Token">
                </el-table-column>
                <el-table-column
                    fixed="right"
                    min-width="140">
                    <template slot="header" slot-scope="scope">
                        <el-input
                        v-model="search"
                        size="mini"
                        @change="handlechange(scope.$index,scope.row)"
                        placeholder="Enter keywords"/>
                    </template>
                    <template slot-scope="scope">
                        <el-button @click="handleEdit(scope.$index,scope.row)" type="text" size="small">{{$t("message.setting.edit")}}</el-button>
                        <el-button @click.native.prevent="deleteRow(scope.$index,scope.row, tableData1)" type="text" size="small">{{$t("message.setting.DeleteAll")}}</el-button>
                    </template>
                </el-table-column>
            </el-table>
            <!-- Pagination -->
            <el-pagination
                style="text-align: center;"
                layout=" prev, pager, next,total, jumper"
                @size-change="handleSizeChange2" 
                @current-change="handleCurrentChange2"
                :current-page="currentPage1"
                :total="total1">
            </el-pagination>
        
    </div>
</template>
<script>
import uuid from '../../../assets/js/uuid'

  export default {
    data() {
      return {
        eltitle:this.$t("message.setting.Configuration"),
        search: '',//Search
        activeName: 'V1_STREAM',//Show tabs first
        inputedit:[],
        label:{
            label:"V1_STREAM",//Pick 1
            label1:"V1_ONVIF",//Pick 2
            label2:"V1_FILE",//Pick 3
            label3:this.$t("message.setting.all"),//Pick 3
            
            Index:this.$t("message.table.Index"),
            Name:this.$t("message.table.Name"),
            IP:this.$t("message.table.IP"),
            Port:this.$t("message.table.Port"),
            User:this.$t("message.table.User"),
            Online:this.$t("message.table.Online"),
            Type:this.$t("message.table.Type"),
            Token:this.$t("message.table.Token"),
            username:this.$t("message.setting.username"),
            Audio:this.$t("message.setting.Audio"),
            password:this.$t("message.setting.password")
        },
        options: [{
                value: 'V1_STREAM',
                label: 'V1_STREAM'
            }, {
                value: 'V1_ONVIF',
                label: 'V1_ONVIF'
            }, {
                value: 'V1_FILE',
                label: 'V1_FILE'
            }
        ],
        //pagination
        pageSize: 10,//Number of pages
        dialogFormVisible: false,//Add popup
        editPopup:false,//Edit popup
        form: {
            Type:"V1_ONVIF",
            Name:"Cam1",
            Token:"",
            Username:"admin",
            Password:"12345",
            URL:"rtsp://192.168.1.1/stream",
            Audio:"false",
            IP:"192.168.1.1",
            Port:"80"
        },
        editform: {
            Audio:"false",
            Audio:"false",
            Name:"",
            Token:"",
            Username:"",
            Password:"",
            URL:"",
            Audio:"",
            IP:"",
            Port:""
        },
        loading: false,
        edittoken:"",//The token to delete when editing
        editindex:"",//Index when editing
        
        tableData1: [],//2
        total1: 0, // Total number 2
        currentPage1: 1, // Current page 2
        
        selectop:[]//Choose those
      };
    },
    mounted(){
        this.loadonvif();
    },
    methods:{
        
        
        //Data in the second table
        loadonvif(){
          //url
          var url = this.$store.state.IPPORT + "/api/v1/GetSrc?type=H5_ONVIF&session="+ this.$store.state.token;
          //   console.log("------------",url)
            this.$http.get(url).then(result=>{
              //console.log("a",result);
              if(result.status == 200){
                  var itme=result.data.src;
                  this.tableData1=[];
                  for(var i=0;i<itme.length;i++){
                      var tabledata={
                          index:i+1,
                          Type:itme[i].nType,
                          Name:itme[i].strName,
                          Token:itme[i].strToken,
                          User:itme[i].strUser,
                          Password:itme[i].strPasswd,
                          IP:itme[i].strSrcIpAddress,
                          Port:itme[i].strSrcPort,
                          Audio :itme[i].bEnableAudio,
                          Online:itme[i].bOnline+"",
                          bPasswdEncrypt:itme[i].bPasswdEncrypt
                      };
                      this.tableData1.push(tabledata);
                      //console.log(tabledata);
                  }
                  this.total1=this.tableData1.length;
              }
            })
        },
        
        //  Edit Add OK button
        Success(){
            this.editPopup = false;
            var root = this.$store.state.IPPORT;
            
            //url
            var form=this.editform;
            var url = root + "/api/v1/AddSrcONVIF?&name="
            +encodeURIComponent(form.Name)+
            "&token="+encodeURIComponent(form.Token)+
            "&user="+encodeURIComponent(form.Username)+
            "&password="+encodeURIComponent(form.Password)+
            "&audio="+form.Audio+
            "&ip="+encodeURIComponent(form.IP)+
            "&port="+encodeURIComponent(form.Port)+
            "&session="+ this.$store.state.token;
            console.log("onvif++++++++++++1",url);
            this.$http.get(url).then(result=>{
                //console.log(result);
                if(result.status==200){
                    if(result.data.bStatus==true){
                        this.loading = false;
                        console.log("*************************1",result.data.bStatus)
                        this.tableData1=[];
                        this.loadonvif();
                    }else{
                        this.loading = false;
                        console.log("*************************2",result.data.bStatus)
                        this.$message({
                            message: 'Edit failed',
                            type: 'warning'
                        });
                        return false;
                    }
                    
                }
            })
        },
        edityes(){
            this.loading = true;
            console.log(this.editindex);
            //return false;
            this.editPopup = false;
            //url
            var form=this.editform;
            var list = {
                index:form.index,
                Type:form.Type,
                Name:form.Name,
                Token:form.Token,
                User:form.Username,
                Password:form.Password,
                IP:form.IP,
                Port:form.Port,
                Audio :form.Audio,
                Online:form.Online+"",
                bPasswdEncrypt:form.bPasswdEncrypt
            }
            console.log("form",form);
           
            //return false;
            var url1 = this.$store.state.IPPORT + "/api/v1/DelSrc?token="+this.edittoken+"&edit=true&session="+ this.$store.state.token;
            this.$http.get(url1).then(result=>{
                console.log("1",result,url1);
                if(result.status==200){
                    if(result.data.bStatus==true){
                        // console.log("*************************",result.data.bStatus)
                        // this.tableData1.splice(this.editindex, 1,list)
                        this.Success();
                        
                    }else{
                        this.loading = false;
                        this.$message({
                            message: "Edit failed",
                            type: 'warning'
                        });
                        return false;
                    }
                }
            })
            
            
        },
        platformyes(){
            this.dialogFormVisible=false;
            //console.log(this.form)
            //return false;
            var form=this.form;
            
            var root = this.$store.state.IPPORT;
            var url = root + "/api/v1/AddSrcONVIF?&name="
            +encodeURIComponent(form.Name)+
            "&token="+encodeURIComponent(form.Token)+
            "&user="+encodeURIComponent(form.Username)+
            "&password="+encodeURIComponent(form.Password)+
            "&audio="+form.Audio+
            "&ip="+encodeURIComponent(form.IP)+
            "&port="+encodeURIComponent(form.Port)+
            "&session="+ this.$store.state.token;
            //console.log(url);
            this.$http.get(url).then(result=>{
                //console.log(result);
                if(result.status==200){
                    if(result.data.bStatus==true){
                        //this.reload();
                        this.tableData1=[];
                        this.loadonvif();
                    }else{
                        this.$message({
                            message: 'Add failed',
                            type: 'warning'
                        });
                        return false;
                    }
                    
                }
            })
        },
        // Edit
        
        handleEdit(index,row){
            console.log(index,row);
            console.log(row.Audio,row.strUrl);
            var index_xlh="";
            //return false;
            console.log("Serial number V1_ONVIF",this.currentPage1,((this.currentPage1-1)*10)+index);
            index_xlh=((this.currentPage1-1)*10)+index;
            //return false;
            this.editPopup = true;
            this.edittoken=row.Token;
            this.editindex=index_xlh;
            this.editform["Type"]=row.Type;
            this.editform["index"]=row.index;
            this.editform["Name"]=row.Name;
            this.editform["Token"]=row.Token;
            this.editform["Username"]=row.User;
            this.editform["Password"]=row.Password;
            this.editform["IP"]=row.IP;
            this.editform["Port"]=row.Port;
            this.editform["URL"]=row.strUrl;
            this.editform["Audio"]=row.Audio;
            this.editform["Online"]=row.Online;
            this.editform["bPasswdEncrypt"]=row.bPasswdEncrypt;
            console.log(this.editform)
            // console.log(this.tableData[index])
        },
        //Randomly get token data when you click Add
        addto(){
            this.dialogFormVisible=true;
            this.form["Token"] = uuid(4, 16).toLowerCase();
        },
        //Click to delete
        deleteRow(index, row,rows) {
          //var form=this.form;
            console.log(rows,this.form.Type,index);
            var index_xlh="";
                console.log("Serial number V1_ONVIF",this.currentPage1,((this.currentPage1-1)*10)+index);
                index_xlh=((this.currentPage1-1)*10)+index;
            //url
            var url = this.$store.state.IPPORT + "/api/v1/DelSrc?token="+encodeURIComponent(row.Token)+"&session="+ this.$store.state.token;
            this.$http.get(url).then(result=>{
                console.log(result);
                console.log(this.tableData);
                if(result.status==200){
                    if(result.data.bStatus==true){
                        rows.splice(index_xlh, 1);
                        this.total1=this.tableData1.length
                    }else{
                        this.$message({
                            message: 'Failed to delete',
                            type: 'warning'
                        });
                        return false;
                    }
                }
            })
        },
        //Select all delete
        deleteselect(){
            var selectop=this.selectop;
            for(var i=selectop.length-1;i>=0;i--){
                //return false;
                console.log(i,selectop[i].type)
                if(selectop[i].type=='duo'){
                    this.tableData1.splice(selectop[i].index, 1);
                    console.log(selectop[i],i,selectop[i].index,this.currentPage1)
                }
                var url = this.$store.state.IPPORT + "/api/v1/DelSrc?token="+encodeURIComponent(selectop[i].token)+"&session="+ this.$store.state.token;
                this.$http.get(url).then(result=>{
                    if(result.status==200){
                        if(result.data.bStatus==true){
                            if(selectop[0].type=='dan'){
                                this.tableData1=[];
                                this.loadonvif();
                            }
                        }else{
                            this.$message({
                                message: 'Failed to delete',
                                type: 'warning'
                            });
                            return false;
                        }
                    }
                })
            }
            
        },
        selectCall(row,index){
            console.log("INDEX",row,index);
            this.selectop=[];
            for(var i=0;i<row.length;i++){
                // console.log(row[i].index,i,((this.currentPage1-1)*10)+i)
                var selectop={
                    token:row[i].Token,
                    index:row[i].index-1,
                    type:"dan",
                };
                
                this.selectop.push(selectop);
                // console.log(this.selectop[i].type,this.selectop)
            }
            
        },
        select_Call(row){
            // console.log(row);
            this.selectop=[];
            
            for(var i=0;i<row.length;i++){
                // console.log(row[i].index,i,((this.currentPage1-1)*10)+i)
                var selectop={
                    token:row[i].Token,
                    index:((this.currentPage1-1)*10)+i,
                    type:'duo',
                    Name:row[i].Name
                };
                this.selectop.push(selectop);
                // console.log(this.selectop[i].type,this.selectop)
            }
        },
        //Search
        handlechange(){},
        //Pagination
        
        //2
        handleSizeChange2(val) {
            console.log(`per page ${val} strip`);
            this.currentPage1 = 1;
            this.pageSize = val;
        },
        handleCurrentChange2(val) {
            console.log(`Current page: ${val}`);
            this.currentPage1 = val;
            console.log(`Current page: ${this.currentPage1 }`);
        }
    },
  };
</script>

