<template>
    <div class="Region" v-loading.fullscreen.lock="loading" element-loading-text="Adding, please do not switch pages" element-loading-background="rgba(0, 0, 0, 0)" >
        <div class="tow_node" v-loading="Delloading" element-loading-text="Deleting, please do not switch pages" element-loading-background="rgba(0, 0, 0, 0)">
            <div class="Root_node Root_node1">
                <el-input
                    class="elinput"
                    prefix-icon="el-icon-search"
                    placeholder="Enter keywords to filter"
                    v-model="filterText1">
                </el-input>
                <div style="font-size:16px;font-family:PingFang SC;color:#cbcbcb;line-height:50px;">Root node</div>
                <el-tree 
                :data="camdata"
                highlight-current
                show-checkbox
                :filter-node-method="filterNode1"
                :props="defaultProps1"
                ref="menuPermissionTree1">
                <span slot-scope="{ data }" style="width:100%;">
                        <div style="width:100%;display: flex;justify-content: space-between;">
                            <span >
                                <span :class="data.iconclass" style="font-size:12px;"></span>
                                <!-- <img src="" alt=""> -->
                                <span :class="data.iconclass1" style="padding-left: 4px;">{{data.label}}</span>
                            </span>
                            <!-- <span :class="data.iconclass2" class="black" style="">{{$t("message.live.Videorecording")}}</span> -->
                        </div>
                    </span>
                </el-tree>
            </div>
            <div class="Root_node Root_node_butt">
                <div>
                    <div class="Root_node_butt1 iconfont icon-jiang-right"></div>
                    <div>
                        <el-button class="button_addpv" type="success" @click="addcam" size="mini">{{$t("message.setting.ADD")}}</el-button>
                    </div>
                </div>
            </div>
            <div class="Root_node">
                <el-input
                    class="elinput"
                    placeholder="Enter keywords to filter"
                    prefix-icon="el-icon-search"
                    v-model="filterText">
                </el-input>
                <div style="font-size:16px;font-family:PingFang SC;color:#cbcbcb;line-height:50px;">Root node</div>
                <el-tree highlight-current :filter-node-method="filterNode" :data="data" :props="defaultProps" ref="menuPermissionTree" @node-click="handleNodeClick2">
                    <span slot-scope="{data}" style="width:100%;">
                        <span>
                            <span class="iconfont icon-quyu"></span>
                            <span :class="data.iconclass1" style="padding-left: 4px;">{{data.strName}} </span>
                        </span>
                    </span>
                </el-tree>
            </div>
            <div class="Root_node">
                <el-input
                    class="elinput"
                    prefix-icon="el-icon-search"
                    placeholder="Enter keywords to filter"
                    v-model="filterText2">
                </el-input>
                <div style="font-size:16px;font-family:PingFang SC;color:#cbcbcb;line-height:50px;">Root node</div>
                <el-tree class="flow-tree" 
                    :data="datanodecam"
                    show-checkbox
                    default-expand-all
                    highlight-current
                    :filter-node-method="filterNode"
                    :props="defaultPropscam"
                    ref="menuPermissionTree2"
                    >
                    <span slot-scope="{ node, data }" style="width:100%;">
                        <div class="datanodecam">
                            <div>
                                <span :class="data.iconclass"></span>
                                <span style="padding-left: 4px;">{{data.strName}}</span>
                            </div>
                            <div v-if="data.iconclass=='iconfont icon-quyu'">
                                <div @click="deleteselectcam(node)"
                                style="font-size:20px;font-weight:500;" class="deleteselectcam iconfont icon-ashbin"></div>
                            </div>
                            <div v-else>
                                <div @click="deleteselectcam1(node)"
                                style="font-size:20px;font-weight:500;" class="deleteselectcam iconfont icon-ashbin"></div>
                            </div>
                        </div>
                    </span>
                </el-tree>
            </div>
        </div>
    </div>
</template>
<script>
    import Vue from 'vue'
    import {listdatagload,listdatag,AllMethods} from '../../public/regional'
    export default {
        data() {
            return {
                label:{
                    label:this.$t("message.setting.Area"),//Pick 1
                    label1:this.$t("message.setting.Regional"),//Pick 2
                    placeholder:this.$t("message.setting.Please")
                },
                filterText:"",
                filterText1:"",
                filterText2:"",
                activeName: 'first',
                data: [],
                camdata:[],
                datanodecam:[],
                rootvalue:"",//Node name
                delcamtoken:"",//deleted token
                datatoken:"",//node token
                datatokenarr:"",
                dataindex:"",
                value: [1, 4],
                defaultProps: {
                    children: 'node',
                    label: 'strName',
                    cam:"cam"
                },
                defaultProps1: {
                    children: 'children',
                    label: 'label'
                },
                defaultPropscam:{
                    children: 'cam',
                    label: 'strName',
                    cam:"cam"
                },
                rootindex:0,
                loading: false,
                Delloading:false,
            };
        },
        created(){
            AllMethods().then(res=>{
                this.camdata = res.listdatag;
            }).catch(err=>{
                console.log(err);
            })
        },
        mounted(){
            console.log(this.camdata,'111111111');
            this.Regional();
            // this.addcam();
        },
        watch: {
            filterText(val) {
                this.$refs.menuPermissionTree.filter(val);
            },
            filterText1(val) {
                this.$refs.menuPermissionTree1.filter(val);
            },
            filterText2(val) {
                this.$refs.menuPermissionTree2.filter(val);
            }
        },
        methods:{
            handleNodeClick2(data){
                // console.log(data.strToken,"2");
                this.datatoken=data.strToken;
                this.datatokenarr=data
                // this.dataindex=data.index;
                // this.dataname=data.strName;
                var root = this.$store.state.IPPORT;
                var url = root + "/api/v1/GetRegion?token="+data.strToken+"&session="+ this.$store.state.token;
                this.$http.get(url).then(result=>{
                    console.log("tokne",result);
                    var oldarr=result.data.root;
                    var oldarr1=result.data.src;
                    var dataroot=this.getchildcam(oldarr,oldarr1);
                    console.log(dataroot)
                    this.datanodecam=[]
                    this.datanodecam.push(dataroot)
                })
            },
            getchildcam(arr,arr1){
                // console.log(arr,arr1)
                for(var i in arr.cam){
                    for(var j in arr1){
                        if(arr.cam[i].strToken == arr1[j].strToken){
                            // arr.cam.strName="摄像机"
                            arr.cam[i].strName = arr1[j].strName;
                            arr.cam[i].iconclass="iconfont icon-kaiqishexiangtou1"
                            arr.cam[i].disabled_me=arr1[j].bDisable
                            arr.cam[i].index=i
                            if(!arr1[j].bOnline)
                                arr.cam[i].iconclass = 'iconfont icon-kaiqishexiangtou';
                        }
                    }
                }
                var camarr=[]
                var camarr1=[]
                for(var i in arr.cam){
                    camarr.push(arr.cam[i].strToken)
                }
                for(var i in arr1){
                    camarr1.push(arr1[i].strToken)
                }
                let diff = camarr.filter(item => !new Set(camarr1).has(item))
                console.log(diff)
                for(var i in arr.cam){
                    for(var j in diff){
                        if(arr.cam[i].strToken == diff[j]){
                            arr.cam[i].strName = 'The device is temporarily unavailable';
                            arr.cam[i].iconclass="iconfont  icon-kaiqishexiangtou"
                        }
                    }
                }
                arr.iconclass="iconfont icon-quyu"
                return arr;
            },
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
				// console.log(arr,arr1);
                // arr.index="1root";
				for(var i in arr.cam){
					if(!arr.cam[i].strName){
						for(var j in arr1){
							if(arr.cam[i].strToken == arr1[j].strToken){

                                arr.cam[i].strName = arr1[j].strName;
                                arr.cam[i].iconclass="iconfont icon-kaiqishexiangtou1"
                                arr.cam[i].disabled_me=arr1[j].bDisable
                                arr.cam[i].index=i
                                if(!arr1[j].bOnline)
                                    arr.cam[i].iconclass = 'iconfont icon-kaiqishexiangtou';
							}
						}
					}
                }
                var camarr=[]
                var camarr1=[]
                for(var i in arr.cam){
                    camarr.push(arr.cam[i].strToken)
                }
                for(var i in arr1){
                    camarr1.push(arr1[i].strToken)
                }
                let diff = camarr.filter(item => !new Set(camarr1).has(item))
                console.log(diff)
                for(var i in arr.cam){
                    for(var j in diff){
                        if(arr.cam[i].strToken == diff[j]){
                            arr.cam[i].strName = 'The device is temporarily unavailable';
                            arr.cam[i].iconclass="iconfont  icon-kaiqishexiangtou"
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
            
            //Add a camera
            async addcam(){
                this.loading = true;
                var tokencheked=this.$refs.menuPermissionTree1.getCheckedNodes();
                console.log(tokencheked)
                if (tokencheked.length==0) {
                    this.loading = false;
                }
                // return false;
                var root = this.$store.state.IPPORT;
                var oldarr=this.data[0];
                var url= '';
                for(var i=0;i<tokencheked.length;i++){
                    var oldarr1=tokencheked[i];
                    if(tokencheked[i].token==undefined){
                        continue
                    }
                    if (tokencheked[i].children&&tokencheked[i].children.length==0) {
                        this.loading = false;
                    }
                    // console.log(tokencheked,oldarr,oldarr1)
                    if (!tokencheked[i].children) {
                        url = root + "/api/v1/AddRegionCam?srctoken="+tokencheked[i].token+"&regiontoken="+this.datatoken+"&session="+ this.$store.state.token;
                        await this.$http.get(url).then(result=>{
                            if(result.status==200){
                                if(result.data.bStatus==true){
                                    // this.data=[];
                                    // this.Regional();
                                    this.loading = false;
                                    var dataroot=this.addcamdata(oldarr,oldarr1);
                                    if(this.datatokenarr!=""){
                                        
                                        this.handleNodeClick2(this.datatokenarr)
                                    }
                                }else{
                                    setTimeout(() => {
                                        this.loading = false;
                                    }, 200);
                                    this.$message({
                                        message: "Camera"+name+"add failed",
                                        type: 'warning'
                                    });
                                    // return false;
                                }
                            }
                        }).catch(()=>{
                            this.loading = false;
                        })
                    }
                }
            },
            addcamdata(arr,arr1){
                if(arr.strToken==this.datatoken){
                    
                    var camdata={
                        strToken: arr1.token,
                        strName: arr1.label,
                        iconclass: arr1.iconclass,
                        iconclass1: "",
                        name: arr1.name,
                        disabled_me: false,
                    }
                    arr.cam.push(camdata);
                    for(var i=0; i<arr.cam.length; i++){
                        for(var j=i+1; j<arr.cam.length; j++){
                            if(arr.cam[i].strToken==arr.cam[j].strToken){
                                arr.cam.splice(j,1);
                                j--;
                            }
                        }
                    }
                }
                if(arr.node && arr.node.length>0){
					for (var i = 0; i < arr.node.length; i++) {
                        arr.node[i] = this.addcamdata(arr.node[i],arr1);
					}
				}
                return arr;
            },
            //删除
            deleteselectcam(){
                this.Delloading = true;
                // var token=`menuPermissionTree1${this.dataindex}`
                var tokencheked=this.$refs.menuPermissionTree2.getCheckedNodes();
                console.log(tokencheked)
                if (tokencheked.length<=1) {
                    this.Delloading = false;
                }
                // return false;
                var root = this.$store.state.IPPORT;
                if(tokencheked.length==0){
                    return false;
                }
                var oldarr=this.datanodecam[0];
                for(var i=0;i<tokencheked.length;i++){
                    if(tokencheked[i].strToken==this.datatoken){
                        continue
                    }
                    console.log(tokencheked[i].strToken)
                    
                    var oldarr1=tokencheked[i];
                    
                    var dataroot=this.delcamdata(oldarr,oldarr1);
                    var url = root + "/api/v1/DelRegionCam?srctoken="+tokencheked[i].strToken+"&regiontoken="+this.datatoken+"&session="+ this.$store.state.token;
                    this.$http.get(url).then(result=>{
                        if(result.status==200){
                            if(result.data.bStatus==true){
                                this.Delloading = false;
                            }else{
                                this.Delloading = false;
                                this.$message({
                                    message: "Camera"+name+"failed to delete",
                                    type: 'warning'
                                });
                                // return false;
                            }
                        }
                    })
                }
            },
            deleteselectcam1(row){
                this.Delloading = true;
                var dataarr=[];
                dataarr.push(row.data)
                var tokencheked=dataarr;
                console.log(tokencheked)
                // return false;
                var root = this.$store.state.IPPORT;
                if(tokencheked.length==0){
                    return false;
                }
                var oldarr=this.datanodecam[0];
                for(var i=0;i<tokencheked.length;i++){
                    if(tokencheked[i].strToken==this.datatoken){
                        continue
                    }
                    console.log(tokencheked[i].strToken)
                    
                    var oldarr1=tokencheked[i];
                    
                    var dataroot=this.delcamdata(oldarr,oldarr1);
                    var url = root + "/api/v1/DelRegionCam?srctoken="+tokencheked[i].strToken+"&regiontoken="+this.datatoken+"&session="+ this.$store.state.token;
                    this.$http.get(url).then(result=>{
                        if(result.status==200){
                            if(result.data.bStatus==true){
                                this.Delloading = false;
                            }else{
                                this.Delloading = false;
                                this.$message({
                                    message: "camera"+name+"failed to delete",
                                    type: 'warning'
                                });
                                // return false;
                            }
                        }
                    })
                }
            },
            delcamdata(arr,arr1){
                // console.log(arr)
                for(var i=0;i< arr.cam.length;i++){
                    
                    if(arr.cam[i].strToken==arr1.strToken){
                        arr.cam.splice(i,1)
                    }
                }
                return arr;
            },

            filterNode(value, data) {
                if (!value) return true;
                return data.strName.indexOf(value) !== -1;
            },
            filterNode1(value, data) {
                console.log(value);
                if (!value) return true;
                return data.label.indexOf(value) !== -1;
            },
            filterNode2(value, data) {
                if (!value) return true;
                return data.strName.indexOf(value) !== -1;
            },
        },
    }
</script>

<style lang="scss" scoped>
.Region{
    .tow_node{
        width: 100%;
        display: flex;
        // justify-content: space-between;
        min-width: 800px;
        .Root_node{
            width: 20%;
            height: 600px;
            // border: 2px solid #4A4A4C;
            overflow: auto;
            padding: 10px;
            .el-tree{
                min-width: 300px;
            }
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
            &::-webkit-scrollbar-track {/*track inside scroll bar*/
                -webkit-box-shadow: inset 0 0 5px rgba(218, 218, 218,0.2);
                box-shadow: inset 0 0 5px rgba(218, 218, 218,0.2);
                border-radius: 0;
                background: rgba(218, 218, 218,0.1);
            }
            .datanodecam{
                width: 100%;
                height: 100%;
                display: flex;
                justify-content: space-between;
                align-items: center;
            }
            &:nth-child(4){
                margin-left: 10px;
            }
        }
        .Root_node_butt{
            width: 10%;
            display: flex;
            justify-content: center;
            align-items: center;
            flex-wrap: wrap;
            border: none;
            text-align: center;
            .Root_node_butt1{
                width: 100%;
                font-size:40px;
                font-weight:600;
            }
            .button_addpv{
                width: 100%;
                background: #3ABCFE;
                border-radius: 3px;
                border: none;
            }
        }
    }
}
</style>