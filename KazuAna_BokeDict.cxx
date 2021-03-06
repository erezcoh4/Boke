// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME KazuAna_BokeDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "Tako.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *Tako_Dictionary();
   static void Tako_TClassManip(TClass*);
   static void *new_Tako(void *p = 0);
   static void *newArray_Tako(Long_t size, void *p);
   static void delete_Tako(void *p);
   static void deleteArray_Tako(void *p);
   static void destruct_Tako(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Tako*)
   {
      ::Tako *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Tako));
      static ::ROOT::TGenericClassInfo 
         instance("Tako", "Tako.h", 28,
                  typeid(::Tako), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Tako_Dictionary, isa_proxy, 4,
                  sizeof(::Tako) );
      instance.SetNew(&new_Tako);
      instance.SetNewArray(&newArray_Tako);
      instance.SetDelete(&delete_Tako);
      instance.SetDeleteArray(&deleteArray_Tako);
      instance.SetDestructor(&destruct_Tako);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Tako*)
   {
      return GenerateInitInstanceLocal((::Tako*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Tako*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Tako_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Tako*)0x0)->GetClass();
      Tako_TClassManip(theClass);
   return theClass;
   }

   static void Tako_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_Tako(void *p) {
      return  p ? new(p) ::Tako : new ::Tako;
   }
   static void *newArray_Tako(Long_t nElements, void *p) {
      return p ? new(p) ::Tako[nElements] : new ::Tako[nElements];
   }
   // Wrapper around operator delete
   static void delete_Tako(void *p) {
      delete ((::Tako*)p);
   }
   static void deleteArray_Tako(void *p) {
      delete [] ((::Tako*)p);
   }
   static void destruct_Tako(void *p) {
      typedef ::Tako current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Tako

namespace ROOT {
   static TClass *vectorlETVector3gR_Dictionary();
   static void vectorlETVector3gR_TClassManip(TClass*);
   static void *new_vectorlETVector3gR(void *p = 0);
   static void *newArray_vectorlETVector3gR(Long_t size, void *p);
   static void delete_vectorlETVector3gR(void *p);
   static void deleteArray_vectorlETVector3gR(void *p);
   static void destruct_vectorlETVector3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TVector3>*)
   {
      vector<TVector3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TVector3>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TVector3>", -2, "vector", 477,
                  typeid(vector<TVector3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETVector3gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TVector3>) );
      instance.SetNew(&new_vectorlETVector3gR);
      instance.SetNewArray(&newArray_vectorlETVector3gR);
      instance.SetDelete(&delete_vectorlETVector3gR);
      instance.SetDeleteArray(&deleteArray_vectorlETVector3gR);
      instance.SetDestructor(&destruct_vectorlETVector3gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TVector3> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TVector3>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETVector3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TVector3>*)0x0)->GetClass();
      vectorlETVector3gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETVector3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETVector3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TVector3> : new vector<TVector3>;
   }
   static void *newArray_vectorlETVector3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TVector3>[nElements] : new vector<TVector3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETVector3gR(void *p) {
      delete ((vector<TVector3>*)p);
   }
   static void deleteArray_vectorlETVector3gR(void *p) {
      delete [] ((vector<TVector3>*)p);
   }
   static void destruct_vectorlETVector3gR(void *p) {
      typedef vector<TVector3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TVector3>

namespace ROOT {
   static TClass *vectorlETLorentzVectorgR_Dictionary();
   static void vectorlETLorentzVectorgR_TClassManip(TClass*);
   static void *new_vectorlETLorentzVectorgR(void *p = 0);
   static void *newArray_vectorlETLorentzVectorgR(Long_t size, void *p);
   static void delete_vectorlETLorentzVectorgR(void *p);
   static void deleteArray_vectorlETLorentzVectorgR(void *p);
   static void destruct_vectorlETLorentzVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TLorentzVector>*)
   {
      vector<TLorentzVector> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TLorentzVector>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TLorentzVector>", -2, "vector", 477,
                  typeid(vector<TLorentzVector>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETLorentzVectorgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TLorentzVector>) );
      instance.SetNew(&new_vectorlETLorentzVectorgR);
      instance.SetNewArray(&newArray_vectorlETLorentzVectorgR);
      instance.SetDelete(&delete_vectorlETLorentzVectorgR);
      instance.SetDeleteArray(&deleteArray_vectorlETLorentzVectorgR);
      instance.SetDestructor(&destruct_vectorlETLorentzVectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TLorentzVector> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETLorentzVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0)->GetClass();
      vectorlETLorentzVectorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETLorentzVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETLorentzVectorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TLorentzVector> : new vector<TLorentzVector>;
   }
   static void *newArray_vectorlETLorentzVectorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TLorentzVector>[nElements] : new vector<TLorentzVector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETLorentzVectorgR(void *p) {
      delete ((vector<TLorentzVector>*)p);
   }
   static void deleteArray_vectorlETLorentzVectorgR(void *p) {
      delete [] ((vector<TLorentzVector>*)p);
   }
   static void destruct_vectorlETLorentzVectorgR(void *p) {
      typedef vector<TLorentzVector> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TLorentzVector>

namespace {
  void TriggerDictionaryInitialization_libKazuAna_Boke_Impl() {
    static const char* headers[] = {
"Tako.h",
0
    };
    static const char* includePaths[] = {
"/usr/local/Cellar/root6/6.06.02/include/root",
"/Users/erezcohen/larlite/UserDev/Boke/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libKazuAna_Boke dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$Tako.h")))  TLorentzVector;
namespace std{inline namespace __1{template <class _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}}
class __attribute__((annotate("$clingAutoload$Tako.h")))  TVector3;
class __attribute__((annotate("$clingAutoload$Tako.h")))  Tako;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libKazuAna_Boke dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Tako.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Tako", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKazuAna_Boke",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKazuAna_Boke_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKazuAna_Boke_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKazuAna_Boke() {
  TriggerDictionaryInitialization_libKazuAna_Boke_Impl();
}
