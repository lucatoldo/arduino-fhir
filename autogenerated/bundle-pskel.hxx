// Copyright (c) 2005-2020 Code Synthesis Tools CC.
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

#ifndef BUNDLE_PSKEL_HXX
#define BUNDLE_PSKEL_HXX

// Begin prologue.
//
//
// End prologue.

#include <xsde/cxx/version.hxx>

#if (XSDE_INT_VERSION != 3029912L)
#error XSD/e runtime version mismatch
#endif

#include <xsde/cxx/config.hxx>

#ifndef XSDE_ENCODING_UTF8
#error the generated code uses the UTF-8 encoding while the XSD/e runtime does not (reconfigure the runtime or change the --char-encoding value)
#endif

#ifndef XSDE_STL
#error the generated code uses STL while the XSD/e runtime does not (reconfigure the runtime or add --no-stl)
#endif

#ifndef XSDE_IOSTREAM
#error the generated code uses iostream while the XSD/e runtime does not (reconfigure the runtime or add --no-iostream)
#endif

#ifndef XSDE_EXCEPTIONS
#error the generated code uses exceptions while the XSD/e runtime does not (reconfigure the runtime or add --no-exceptions)
#endif

#ifndef XSDE_LONGLONG
#error the generated code uses long long while the XSD/e runtime does not (reconfigure the runtime or add --no-long-long)
#endif

#ifndef XSDE_PARSER_VALIDATION
#error the generated code uses validation while the XSD/e runtime does not (reconfigure the runtime or add --suppress-validation)
#endif

#ifdef XSDE_POLYMORPHIC
#error the generated code expects XSD/e runtime without polymorphism support (reconfigure the runtime or add --generate-polymorphic/--runtime-polymorphic)
#endif

#ifndef XSDE_REUSE_STYLE_TIEIN
#error the generated code uses the tiein reuse style while the XSD/e runtime does not (reconfigure the runtime or add --reuse-style-mixin or --reuse-style-none)
#endif

#ifdef XSDE_CUSTOM_ALLOCATOR
#error the XSD/e runtime uses custom allocator while the generated code does not (reconfigure the runtime or add --custom-allocator)
#endif

#include <xsde/cxx/pre.hxx>

// Forward declarations
//
namespace fhir
{
  class Bundle_pskel;
  class Bundle_Link_pskel;
  class Bundle_Entry_pskel;
  class Bundle_Search_pskel;
  class Bundle_Request_pskel;
  class Bundle_Response_pskel;
  class HTTPVerb_list_pskel;
  class HTTPVerb_pskel;
  class BundleType_list_pskel;
  class BundleType_pskel;
  class SearchEntryMode_list_pskel;
  class SearchEntryMode_pskel;
}


#include <xsde/cxx/ro-string.hxx>

#include <xsde/cxx/parser/xml-schema.hxx>

#include <xsde/cxx/parser/exceptions.hxx>

#include <xsde/cxx/stack.hxx>
#include <xsde/cxx/parser/validating/parser.hxx>
#include <xsde/cxx/parser/validating/xml-schema-pskel.hxx>
#include <xsde/cxx/parser/validating/xml-schema-pimpl.hxx>

#include <xsde/cxx/parser/expat/document.hxx>

namespace xml_schema
{
  // Built-in XML Schema types mapping.
  //
  using ::xsde::cxx::string_sequence;
  using ::xsde::cxx::qname;
  using ::xsde::cxx::buffer;
  using ::xsde::cxx::time_zone;
  using ::xsde::cxx::gday;
  using ::xsde::cxx::gmonth;
  using ::xsde::cxx::gyear;
  using ::xsde::cxx::gmonth_day;
  using ::xsde::cxx::gyear_month;
  using ::xsde::cxx::date;
  using ::xsde::cxx::time;
  using ::xsde::cxx::date_time;
  using ::xsde::cxx::duration;

  // Base parser skeletons.
  //
  using ::xsde::cxx::parser::parser_base;
  typedef ::xsde::cxx::parser::validating::empty_content parser_empty_content;
  typedef ::xsde::cxx::parser::validating::simple_content parser_simple_content;
  typedef ::xsde::cxx::parser::validating::complex_content parser_complex_content;
  typedef ::xsde::cxx::parser::validating::list_base parser_list_base;

  // Parser skeletons and implementations for the XML Schema
  // built-in types.
  //
  using ::xsde::cxx::parser::validating::any_type_pskel;
  using ::xsde::cxx::parser::validating::any_type_pimpl;

  using ::xsde::cxx::parser::validating::any_simple_type_pskel;
  using ::xsde::cxx::parser::validating::any_simple_type_pimpl;

  using ::xsde::cxx::parser::validating::byte_pskel;
  using ::xsde::cxx::parser::validating::byte_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_byte_pskel;
  using ::xsde::cxx::parser::validating::unsigned_byte_pimpl;

  using ::xsde::cxx::parser::validating::short_pskel;
  using ::xsde::cxx::parser::validating::short_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_short_pskel;
  using ::xsde::cxx::parser::validating::unsigned_short_pimpl;

  using ::xsde::cxx::parser::validating::int_pskel;
  using ::xsde::cxx::parser::validating::int_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_int_pskel;
  using ::xsde::cxx::parser::validating::unsigned_int_pimpl;

  using ::xsde::cxx::parser::validating::long_pskel;
  using ::xsde::cxx::parser::validating::long_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_long_pskel;
  using ::xsde::cxx::parser::validating::unsigned_long_pimpl;

  using ::xsde::cxx::parser::validating::integer_pskel;
  using ::xsde::cxx::parser::validating::integer_pimpl;

  using ::xsde::cxx::parser::validating::non_positive_integer_pskel;
  using ::xsde::cxx::parser::validating::non_positive_integer_pimpl;

  using ::xsde::cxx::parser::validating::non_negative_integer_pskel;
  using ::xsde::cxx::parser::validating::non_negative_integer_pimpl;

  using ::xsde::cxx::parser::validating::positive_integer_pskel;
  using ::xsde::cxx::parser::validating::positive_integer_pimpl;

  using ::xsde::cxx::parser::validating::negative_integer_pskel;
  using ::xsde::cxx::parser::validating::negative_integer_pimpl;

  using ::xsde::cxx::parser::validating::boolean_pskel;
  using ::xsde::cxx::parser::validating::boolean_pimpl;

  using ::xsde::cxx::parser::validating::float_pskel;
  using ::xsde::cxx::parser::validating::float_pimpl;

  using ::xsde::cxx::parser::validating::double_pskel;
  using ::xsde::cxx::parser::validating::double_pimpl;

  using ::xsde::cxx::parser::validating::decimal_pskel;
  using ::xsde::cxx::parser::validating::decimal_pimpl;

  using ::xsde::cxx::parser::validating::string_pskel;
  using ::xsde::cxx::parser::validating::string_pimpl;

  using ::xsde::cxx::parser::validating::normalized_string_pskel;
  using ::xsde::cxx::parser::validating::normalized_string_pimpl;

  using ::xsde::cxx::parser::validating::token_pskel;
  using ::xsde::cxx::parser::validating::token_pimpl;

  using ::xsde::cxx::parser::validating::name_pskel;
  using ::xsde::cxx::parser::validating::name_pimpl;

  using ::xsde::cxx::parser::validating::nmtoken_pskel;
  using ::xsde::cxx::parser::validating::nmtoken_pimpl;

  using ::xsde::cxx::parser::validating::nmtokens_pskel;
  using ::xsde::cxx::parser::validating::nmtokens_pimpl;

  using ::xsde::cxx::parser::validating::ncname_pskel;
  using ::xsde::cxx::parser::validating::ncname_pimpl;

  using ::xsde::cxx::parser::validating::language_pskel;
  using ::xsde::cxx::parser::validating::language_pimpl;

  using ::xsde::cxx::parser::validating::id_pskel;
  using ::xsde::cxx::parser::validating::id_pimpl;

  using ::xsde::cxx::parser::validating::idref_pskel;
  using ::xsde::cxx::parser::validating::idref_pimpl;

  using ::xsde::cxx::parser::validating::idrefs_pskel;
  using ::xsde::cxx::parser::validating::idrefs_pimpl;

  using ::xsde::cxx::parser::validating::uri_pskel;
  using ::xsde::cxx::parser::validating::uri_pimpl;

  using ::xsde::cxx::parser::validating::qname_pskel;
  using ::xsde::cxx::parser::validating::qname_pimpl;

  using ::xsde::cxx::parser::validating::base64_binary_pskel;
  using ::xsde::cxx::parser::validating::base64_binary_pimpl;

  using ::xsde::cxx::parser::validating::hex_binary_pskel;
  using ::xsde::cxx::parser::validating::hex_binary_pimpl;

  using ::xsde::cxx::parser::validating::date_pskel;
  using ::xsde::cxx::parser::validating::date_pimpl;

  using ::xsde::cxx::parser::validating::date_time_pskel;
  using ::xsde::cxx::parser::validating::date_time_pimpl;

  using ::xsde::cxx::parser::validating::duration_pskel;
  using ::xsde::cxx::parser::validating::duration_pimpl;

  using ::xsde::cxx::parser::validating::gday_pskel;
  using ::xsde::cxx::parser::validating::gday_pimpl;

  using ::xsde::cxx::parser::validating::gmonth_pskel;
  using ::xsde::cxx::parser::validating::gmonth_pimpl;

  using ::xsde::cxx::parser::validating::gmonth_day_pskel;
  using ::xsde::cxx::parser::validating::gmonth_day_pimpl;

  using ::xsde::cxx::parser::validating::gyear_pskel;
  using ::xsde::cxx::parser::validating::gyear_pimpl;

  using ::xsde::cxx::parser::validating::gyear_month_pskel;
  using ::xsde::cxx::parser::validating::gyear_month_pimpl;

  using ::xsde::cxx::parser::validating::time_pskel;
  using ::xsde::cxx::parser::validating::time_pimpl;

  // Read-only string.
  //
  using ::xsde::cxx::ro_string;

  // Error codes.
  //
  typedef xsde::cxx::parser::expat::xml_error parser_xml_error;
  typedef xsde::cxx::schema_error parser_schema_error;

  // Exceptions.
  //
  typedef xsde::cxx::parser::exception parser_exception;
  typedef xsde::cxx::parser::xml parser_xml;
  typedef xsde::cxx::parser::schema parser_schema;

  // Document parser.
  //
  using xsde::cxx::parser::expat::document_pimpl;

  // Parser context.
  //
  typedef xsde::cxx::parser::context parser_context;
}

#include "fhir-base-pskel.hxx"

namespace fhir
{
  class Bundle_pskel: public ::fhir::Resource_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    identifier ();

    virtual void
    type ();

    virtual void
    timestamp ();

    virtual void
    total ();

    virtual void
    link ();

    virtual void
    entry ();

    virtual void
    signature ();

    virtual void
    post_Bundle ();

    // Parser construction API.
    //
    void
    parsers (::fhir::id_pskel& /* id */,
             ::fhir::Meta_pskel& /* meta */,
             ::fhir::uri_pskel& /* implicitRules */,
             ::fhir::code_pskel& /* language */,
             ::fhir::Identifier_pskel& /* identifier */,
             ::fhir::BundleType_pskel& /* type */,
             ::fhir::instant_pskel& /* timestamp */,
             ::fhir::unsignedInt_pskel& /* total */,
             ::fhir::Bundle_Link_pskel& /* link */,
             ::fhir::Bundle_Entry_pskel& /* entry */,
             ::fhir::Signature_pskel& /* signature */);

    // Individual element parsers.
    //
    void
    identifier_parser (::fhir::Identifier_pskel&);

    void
    type_parser (::fhir::BundleType_pskel&);

    void
    timestamp_parser (::fhir::instant_pskel&);

    void
    total_parser (::fhir::unsignedInt_pskel&);

    void
    link_parser (::fhir::Bundle_Link_pskel&);

    void
    entry_parser (::fhir::Bundle_Entry_pskel&);

    void
    signature_parser (::fhir::Signature_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Bundle_pskel (::fhir::Resource_pskel* tiein);

    // Implementation details.
    //
    protected:
    Bundle_pskel* Bundle_impl_;
    Bundle_pskel (Bundle_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Identifier_pskel* identifier_parser_;
    ::fhir::BundleType_pskel* type_parser_;
    ::fhir::instant_pskel* timestamp_parser_;
    ::fhir::unsignedInt_pskel* total_parser_;
    ::fhir::Bundle_Link_pskel* link_parser_;
    ::fhir::Bundle_Entry_pskel* entry_parser_;
    ::fhir::Signature_pskel* signature_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Bundle_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class Bundle_Link_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    relation ();

    virtual void
    url ();

    virtual void
    post_Bundle_Link ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* relation */,
             ::fhir::uri_pskel& /* url */);

    // Individual element parsers.
    //
    void
    relation_parser (::fhir::string_pskel&);

    void
    url_parser (::fhir::uri_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Bundle_Link_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Bundle_Link_pskel* Bundle_Link_impl_;
    Bundle_Link_pskel (Bundle_Link_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* relation_parser_;
    ::fhir::uri_pskel* url_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Bundle_Link_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class Bundle_Entry_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    link ();

    virtual void
    fullUrl ();

    virtual void
    resource ();

    virtual void
    search ();

    virtual void
    request ();

    virtual void
    response ();

    virtual void
    post_Bundle_Entry ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::Bundle_Link_pskel& /* link */,
             ::fhir::uri_pskel& /* fullUrl */,
             ::fhir::ResourceContainer_pskel& /* resource */,
             ::fhir::Bundle_Search_pskel& /* search */,
             ::fhir::Bundle_Request_pskel& /* request */,
             ::fhir::Bundle_Response_pskel& /* response */);

    // Individual element parsers.
    //
    void
    link_parser (::fhir::Bundle_Link_pskel&);

    void
    fullUrl_parser (::fhir::uri_pskel&);

    void
    resource_parser (::fhir::ResourceContainer_pskel&);

    void
    search_parser (::fhir::Bundle_Search_pskel&);

    void
    request_parser (::fhir::Bundle_Request_pskel&);

    void
    response_parser (::fhir::Bundle_Response_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Bundle_Entry_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Bundle_Entry_pskel* Bundle_Entry_impl_;
    Bundle_Entry_pskel (Bundle_Entry_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Bundle_Link_pskel* link_parser_;
    ::fhir::uri_pskel* fullUrl_parser_;
    ::fhir::ResourceContainer_pskel* resource_parser_;
    ::fhir::Bundle_Search_pskel* search_parser_;
    ::fhir::Bundle_Request_pskel* request_parser_;
    ::fhir::Bundle_Response_pskel* response_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Bundle_Entry_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class Bundle_Search_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    mode ();

    virtual void
    score ();

    virtual void
    post_Bundle_Search ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::SearchEntryMode_pskel& /* mode */,
             ::fhir::decimal_pskel& /* score */);

    // Individual element parsers.
    //
    void
    mode_parser (::fhir::SearchEntryMode_pskel&);

    void
    score_parser (::fhir::decimal_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Bundle_Search_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Bundle_Search_pskel* Bundle_Search_impl_;
    Bundle_Search_pskel (Bundle_Search_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::SearchEntryMode_pskel* mode_parser_;
    ::fhir::decimal_pskel* score_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Bundle_Search_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class Bundle_Request_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    method ();

    virtual void
    url ();

    virtual void
    ifNoneMatch ();

    virtual void
    ifModifiedSince ();

    virtual void
    ifMatch ();

    virtual void
    ifNoneExist ();

    virtual void
    post_Bundle_Request ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::HTTPVerb_pskel& /* method */,
             ::fhir::uri_pskel& /* url */,
             ::fhir::string_pskel& /* ifNoneMatch */,
             ::fhir::instant_pskel& /* ifModifiedSince */,
             ::fhir::string_pskel& /* ifMatch */,
             ::fhir::string_pskel& /* ifNoneExist */);

    // Individual element parsers.
    //
    void
    method_parser (::fhir::HTTPVerb_pskel&);

    void
    url_parser (::fhir::uri_pskel&);

    void
    ifNoneMatch_parser (::fhir::string_pskel&);

    void
    ifModifiedSince_parser (::fhir::instant_pskel&);

    void
    ifMatch_parser (::fhir::string_pskel&);

    void
    ifNoneExist_parser (::fhir::string_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Bundle_Request_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Bundle_Request_pskel* Bundle_Request_impl_;
    Bundle_Request_pskel (Bundle_Request_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::HTTPVerb_pskel* method_parser_;
    ::fhir::uri_pskel* url_parser_;
    ::fhir::string_pskel* ifNoneMatch_parser_;
    ::fhir::instant_pskel* ifModifiedSince_parser_;
    ::fhir::string_pskel* ifMatch_parser_;
    ::fhir::string_pskel* ifNoneExist_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Bundle_Request_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class Bundle_Response_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    status ();

    virtual void
    location ();

    virtual void
    etag ();

    virtual void
    lastModified ();

    virtual void
    outcome ();

    virtual void
    post_Bundle_Response ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* status */,
             ::fhir::uri_pskel& /* location */,
             ::fhir::string_pskel& /* etag */,
             ::fhir::instant_pskel& /* lastModified */,
             ::fhir::ResourceContainer_pskel& /* outcome */);

    // Individual element parsers.
    //
    void
    status_parser (::fhir::string_pskel&);

    void
    location_parser (::fhir::uri_pskel&);

    void
    etag_parser (::fhir::string_pskel&);

    void
    lastModified_parser (::fhir::instant_pskel&);

    void
    outcome_parser (::fhir::ResourceContainer_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Bundle_Response_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Bundle_Response_pskel* Bundle_Response_impl_;
    Bundle_Response_pskel (Bundle_Response_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* status_parser_;
    ::fhir::uri_pskel* location_parser_;
    ::fhir::string_pskel* etag_parser_;
    ::fhir::instant_pskel* lastModified_parser_;
    ::fhir::ResourceContainer_pskel* outcome_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Bundle_Response_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class HTTPVerb_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_HTTPVerb_list ();

    // Constructor.
    //
    HTTPVerb_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    HTTPVerb_list_pskel* HTTPVerb_list_impl_;
    HTTPVerb_list_pskel (HTTPVerb_list_pskel*, void*);

    protected:
    static const char* const _xsde_HTTPVerb_list_pskel_enums_[6UL];
  };

  class HTTPVerb_pskel: public ::fhir::Element_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    value ();

    virtual void
    post_HTTPVerb ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::HTTPVerb_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::HTTPVerb_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    HTTPVerb_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    HTTPVerb_pskel* HTTPVerb_impl_;
    HTTPVerb_pskel (HTTPVerb_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::HTTPVerb_list_pskel* value_parser_;
  };

  class BundleType_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_BundleType_list ();

    // Constructor.
    //
    BundleType_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    BundleType_list_pskel* BundleType_list_impl_;
    BundleType_list_pskel (BundleType_list_pskel*, void*);

    protected:
    static const char* const _xsde_BundleType_list_pskel_enums_[9UL];
  };

  class BundleType_pskel: public ::fhir::Element_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    value ();

    virtual void
    post_BundleType ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::BundleType_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::BundleType_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    BundleType_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    BundleType_pskel* BundleType_impl_;
    BundleType_pskel (BundleType_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::BundleType_list_pskel* value_parser_;
  };

  class SearchEntryMode_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_SearchEntryMode_list ();

    // Constructor.
    //
    SearchEntryMode_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    SearchEntryMode_list_pskel* SearchEntryMode_list_impl_;
    SearchEntryMode_list_pskel (SearchEntryMode_list_pskel*, void*);

    protected:
    static const char* const _xsde_SearchEntryMode_list_pskel_enums_[3UL];
  };

  class SearchEntryMode_pskel: public ::fhir::Element_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    value ();

    virtual void
    post_SearchEntryMode ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::SearchEntryMode_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::SearchEntryMode_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    SearchEntryMode_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    SearchEntryMode_pskel* SearchEntryMode_impl_;
    SearchEntryMode_pskel (SearchEntryMode_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::SearchEntryMode_list_pskel* value_parser_;
  };
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // BUNDLE_PSKEL_HXX
