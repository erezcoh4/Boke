#ifndef TAKO_CXX
#define TAKO_CXX

#include "Tako.h"

Tako::Tako() : fout(nullptr), tree(nullptr)
{
//  vec1 = new std::vector<TLorentzVector>;
//  vec2 = new std::vector<TVector3>;
}

void Tako::Open()
{
  if(fout || tree) {
    std::cerr << "Cannot call " << __FUNCTION__ 
	      << " after file is opened!" << std::endl;
    throw std::exception();
  }
  fout = TFile::Open("out.root","RECREATE");
  tree = new TTree("tree","");
  tree->Branch("vec1",&vec1);
  tree->Branch("vec2",&vec2);
  vec1.clear();
  vec2.clear();
}

void Tako::Fill()
{
  if(!fout || !tree) {
    std::cerr << "Cannot call " << __FUNCTION__
	      << " before file is opened!" << std::endl;
    throw std::exception();
  }
  TLorentzVector in1(vec1.size(), vec1.size(), vec1.size(), vec1.size());
  vec1.push_back(in1);

  TVector3 in2(vec2.size(), vec2.size(), vec2.size());
  vec2.push_back(in2);
  
  tree->Fill();
}

void Tako::Close()
{
  if(!fout || !tree) {
    std::cerr << "Cannot call " << __FUNCTION__
	      << " before file is opened!" << std::endl;
    throw std::exception();
  }
  fout->cd();
  tree->Write();
  fout->Close();

  fout = nullptr;
  tree = nullptr;
}

#endif
