<template>
    <div class="Region"  v-loading="loading" element-loading-text="Adding, please do not switch pages" element-loading-background="rgba(0, 0, 0, 0)">
        <div v-loading="Delloading" element-loading-text="Deleting, please do not switch pages" element-loading-background="rgba(0, 0, 0, 0)">
        <!-- Add -->
        <div class="button_edi">
            <!-- Add button -->
            <el-popover
                placement="right"
                width="250"
                trigger="click">
                <div class="input-pin">
                    <div class="popover_Title">root</div>
                    <el-input
                        :placeholder="label.placeholder"
                        v-model="rootvalue">
                    </el-input>
                    <div>
                        <CButton class="form_butt" @click="addto" type="submit">Add</CButton>
                    </div>
                </div>
                <CButton class="form_butt" slot="reference" type="submit">{{$t("message.setting.ADD")}}</CButton>
            </el-popover>
            <CButton class="form_butt1" @click="deleteselect" type="submit">{{$t("message.setting.DeleteAll")}}</CButton>
        </div>
        <div class="Root_node1">
            <el-tree :data="data" :props="defaultProps" @node-click="handleNodeClick">
                <span slot-scope="{ data }" style="width:100%;">
                    <div style="width:100%;display: flex;justify-content: space-between;">
                        <span>
                            <span class="mdi mdi-view-sequential fa-fw"></span>
                            <span :class="data.iconclass1" style="padding-left: 4px;">{{data.strName}}</span>
                        </span>
                        <el-popover
                            placement="right"
                            width="250"
                            trigger="hover">
                            <div class="input-pin">
                                <div class="popover_Title">{{data.strName}}</div>
                                <el-input
                                    :placeholder="label.placeholder"
                                    v-model="rootvalue">
                                </el-input>
                                <div>
                                    <el-button class="button_addpv" type="success" @click.native.prevent="addtonond(data.strToken)" round size="mini">{{$t("message.setting.ADD")}}</el-button>
                                </div>
                            </div>
                            <el-button  class="but_add iconfont icon-add" slot="reference" type="submit"></el-button>
                        </el-popover>
                    </div>
                </span>
            </el-tree>
        </div>
        </div>
    </div>
</template>
<script>
    import Vue from 'vue'
    export default {
        data() {
            return {
                label:{
                    label:this.$t("message.setting.Area"),//Pick 1
                    label1:this.$t("message.setting.Regional"),//Pick 2
                    placeholder:this.$t("message.setting.Please")
                },
                data: [],
                camdata:[],
                datanodecam:[],
                rootvalue:"",//node name
                datatoken:"",//node token
                dataindex:"",
                defaultProps: {
                    children: 'node',
                    label: 'strName',
                    cam:"cam"
                },
                rootindex:0,
                loading: false,
                Delloading:false
            };
        },
        mounted(){
            this.Regional();
            // this.addcam();
        },
        methods:{
            //show
            Regional(){
                var root = this.$store.state.IPPORT;
                var url = root + "/api/v1/GetRegion?session="+ this.$store.state.token;
                this.$http.get(url).then(result=>{
                    var oldarr=result.data.root;
                    var oldarr1=result.data.src;
                    var dataroot=this.getchild(oldarr,oldarr1);
                    this.datanodecam=[]
                    this.data.push(dataroot);
                })
            },
            getchild(arr,arr1) {
				for(var i in arr.cam){
					if(!arr.cam[i].strName){
						for(var j in arr1){
							if(arr.cam[i].strToken == arr1[j].strToken){
                                arr.cam[i].strName = arr1[j].strName;
                                arr.cam[i].iconclass="mdi mdi-camcorder fa-fw"
                                arr.cam[i].disabled_me=arr1[j].bDisable
                                arr.cam[i].index=i
                                if(!arr1[j].bOnline)
                                    arr.cam[i].iconclass = 'mdi mdi-camcorder-off fa-fw';

                                if(arr1[j].bDisable== true){
                                    arr.cam[i].iconclass1= 'camera';
                                }

							}
						}
					}
                }
                if(arr.node && arr.node.length>0){
					for (var i = 0; i < arr.node.length; i++) {
                        arr.node[i].index=this.rootindex;
                        this.rootindex=this.rootindex+1
                        arr.node[i] = this.getchild(arr.node[i],arr1);
					}
                }
                return arr;
			},
            
            //Add
            addto(){
                if(this.rootvalue==""){
                    this.$message({
                        message: this.$t("message.setting.Input"),
                        type: 'warning'
                    });
                    return false;
                }else{
                    this.loading = true;
                    var root = this.$store.state.IPPORT;
                    var url = root + "/api/v1/AddRegion?name="+encodeURIComponent(this.rootvalue)+"&session="+ this.$store.state.token;
                    var oldarr=this.data[0];
                    this.$http.get(url).then(result=>{
                         setTimeout(() => {
                            this.loading = false;
                        }, 200);
                        this.addcamdatas(oldarr,this.datatoken,result.data.strToken)
                    })
                }
            },
            addtonond(strToken){
                console.log(strToken)
                if(this.rootvalue==""){
                    this.$message({
                        message: this.$t("message.setting.Input"),
                        type: 'warning'
                    });
                    return false;
                }else{
                    this.loading = true;
                    var root = this.$store.state.IPPORT;
                    var oldarr=this.data[0];
                    var oldarr1=strToken
                    var url = root + "/api/v1/AddRegion?name="+encodeURIComponent(this.rootvalue)+"&parent="+strToken+"&session="+ this.$store.state.token;
                    this.$http.get(url).then(result=>{
                         setTimeout(() => {
                            this.loading = false;
                        }, 200);
                        this.addcamdatas(oldarr,oldarr1,result.data.strToken)
                    })
                }
            },
            addcamdatas(arr,arr1,strToken){
                
                if(arr1=="root"){
                    var camdata={
                        strName:this.rootvalue,
                        strToken:strToken,
                        node:[],
                        cam:[]
                    }
                    arr.node.push(camdata);
                    return false;
                }
                if(arr.node && arr.node.length>0){
                    for (var i = 0; i < arr.node.length; i++) {
                        // console.log(arr.node[i].strToken,arr1)
                        if(arr.node[i].strToken==arr1){
                            var camdata={
                                strName:this.rootvalue,
                                strToken:strToken,
                                node:[],
                                cam:[]
                            }
                            arr.node[i].node.push(camdata);
                        }
                        arr.node[i] = this.addcamdatas(arr.node[i],arr1,strToken);
                    }
                }   
                return arr;
            },
            
            //Delete
            deleteselect(){
                if(this.datatoken==""){
                    this.$message({
                        message: 'Please select a node',
                        type: 'warning'
                    });
                    return false;
                }
                this.Delloading=true;
                if (this.datatoken=="root") {
                    this.Delloading=false;
                }
                var root = this.$store.state.IPPORT;
                var oldarr=this.data[0];
                var oldarr1=this.datatoken
                var url = root + "/api/v1/DelRegion?token="+this.datatoken+"&session="+ this.$store.state.token;
                this.$http.get(url).then(result=>{
                    if(result.status==200){
                        this.Delloading=false;
                        this.datatoken="";
                        this.delet(oldarr,oldarr1)
                    }else{
                        this.Delloading=false;
                    }
                })
            },
            delet(arr,arr1){
                if(arr.node && arr.node.length>0){
					for (var i = 0; i < arr.node.length; i++) {
                        if(arr.node[i].strToken==arr1){
                            arr.node.splice(i,1)
                            return false
                        }
                        
                        arr.node[i] = this.delet(arr.node[i],arr1);
					}
				}
                return arr;
            },
            
            handleNodeClick(data) {
                console.log(data.strToken);
                this.datatoken=data.strToken;
                this.dataindex=data.index;
                this.dataname=data.strName;
            },
        },
    }
</script>

<style lang="scss" scoped>
.Root_node1{
    display: inline-block;
    width: auto;
    min-width: 250px;
    height: 600px;
    overflow: auto;
    border: 1px solid #e1e1e1;
    padding: 0 15px;
    padding-top: 10px;
    &::-webkit-scrollbar {/*Overall style of the scroll bar*/
        width: 8px;     /*The height and width correspond to the size of the horizontal and vertical scroll bars respectively*/
        height: 8px;
        scrollbar-arrow-color:red;
    }
    &::-webkit-scrollbar-thumb {/*Small squares inside the scroll bar*/
        border-radius: 5px;
        -webkit-box-shadow: inset 0 0 5px rgba(218, 218, 218,0.2);
        box-shadow: inset 0 0 5px rgba(218, 218, 218,0.2);
        background: rgba(218, 218, 218,0.2);
        scrollbar-arrow-color:red;
    }
    &::-webkit-scrollbar-track {/*Track inside scroll bar*/
        -webkit-box-shadow: inset 0 0 5px rgba(218, 218, 218,0.2);
        box-shadow: inset 0 0 5px rgba(218, 218, 218,0.2);
        border-radius: 0;
        background: rgba(218, 218, 218,0.1);
    }
    .but_add{
        border: none!important;
        background: none!important;
        padding: 0;
    }
}
</style>