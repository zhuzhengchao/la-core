
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_libxmlj_dom_GnomeDocumentBuilderFactory__
#define __gnu_xml_libxmlj_dom_GnomeDocumentBuilderFactory__

#pragma interface

#include <javax/xml/parsers/DocumentBuilderFactory.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace libxmlj
      {
        namespace dom
        {
            class GnomeDocumentBuilderFactory;
        }
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace parsers
      {
          class DocumentBuilder;
      }
    }
  }
}

class gnu::xml::libxmlj::dom::GnomeDocumentBuilderFactory : public ::javax::xml::parsers::DocumentBuilderFactory
{

public:
  GnomeDocumentBuilderFactory();
  virtual ::java::lang::Object * getAttribute(::java::lang::String *);
  virtual ::javax::xml::parsers::DocumentBuilder * newDocumentBuilder();
  virtual void setAttribute(::java::lang::String *, ::java::lang::Object *);
  virtual void setFeature(::java::lang::String *, jboolean);
  virtual jboolean getFeature(::java::lang::String *);
private:
  jboolean __attribute__((aligned(__alignof__( ::javax::xml::parsers::DocumentBuilderFactory)))) secureProcessing;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_libxmlj_dom_GnomeDocumentBuilderFactory__
