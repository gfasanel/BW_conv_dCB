{
  gSystem->Load("BW_conv_dCB_cxx.so");
  RooRealVar x("x","x",60,120);
  RooRealVar mRes("mRes","mRes",90.);
  RooRealVar mean("mean","mean",0.);
  RooRealVar sigma("sigma","sigma",0.3);
  RooRealVar alphaR("alphaR","alphaR",1);
  RooRealVar nR("nR","nR",100);
  RooRealVar alphaL("alphaL","alphaL",1);
  RooRealVar nL("nL","nL",100);
  
  BW_conv_dCB model("model","model",x, mRes, mean, sigma, alphaL, alphaR, nL, nR);
  RooPlot* xframe = x.frame();
  model.plotOn(xframe);
  xframe->Draw(); 
  //cout<<endl<<"getVal is "<<model.getVal()<<endl;//last value
}
