/**
 * \file Tako.h
 *
 * \ingroup Boke
 * 
 * \brief Class def header for a class Tako
 *
 * @author drinkingkazu
 */

/** \addtogroup Boke

    @{*/
#ifndef TAKO_H
#define TAKO_H

#include <iostream>
#include <TTree.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <TVector3.h>

/**
   \class Tako
   User defined class Tako ... these comments are used to generate
   doxygen documentation!
 */
class Tako{

public:

  /// Default constructor
  Tako();

  /// Default destructor
  ~Tako(){}

  void Open();
  void Fill();
  void Close();
  
  TFile* fout;
  TTree* tree;
  std::vector<TLorentzVector> vec1;
  std::vector<TVector3> vec2;

};

#endif
/** @} */ // end of doxygen group 

