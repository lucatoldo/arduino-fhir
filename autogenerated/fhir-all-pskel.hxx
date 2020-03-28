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

#ifndef FHIR_ALL_PSKEL_HXX
#define FHIR_ALL_PSKEL_HXX

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

#include "account-pskel.hxx"

#include "activitydefinition-pskel.hxx"

#include "adverseevent-pskel.hxx"

#include "allergyintolerance-pskel.hxx"

#include "appointment-pskel.hxx"

#include "appointmentresponse-pskel.hxx"

#include "auditevent-pskel.hxx"

#include "basic-pskel.hxx"

#include "binary-pskel.hxx"

#include "biologicallyderivedproduct-pskel.hxx"

#include "bodystructure-pskel.hxx"

#include "bundle-pskel.hxx"

#include "capabilitystatement-pskel.hxx"

#include "careplan-pskel.hxx"

#include "careteam-pskel.hxx"

#include "catalogentry-pskel.hxx"

#include "chargeitem-pskel.hxx"

#include "chargeitemdefinition-pskel.hxx"

#include "claim-pskel.hxx"

#include "claimresponse-pskel.hxx"

#include "clinicalimpression-pskel.hxx"

#include "codesystem-pskel.hxx"

#include "communication-pskel.hxx"

#include "communicationrequest-pskel.hxx"

#include "compartmentdefinition-pskel.hxx"

#include "composition-pskel.hxx"

#include "conceptmap-pskel.hxx"

#include "condition-pskel.hxx"

#include "consent-pskel.hxx"

#include "contract-pskel.hxx"

#include "coverage-pskel.hxx"

#include "coverageeligibilityrequest-pskel.hxx"

#include "coverageeligibilityresponse-pskel.hxx"

#include "detectedissue-pskel.hxx"

#include "device-pskel.hxx"

#include "devicedefinition-pskel.hxx"

#include "devicemetric-pskel.hxx"

#include "devicerequest-pskel.hxx"

#include "deviceusestatement-pskel.hxx"

#include "diagnosticreport-pskel.hxx"

#include "documentmanifest-pskel.hxx"

#include "documentreference-pskel.hxx"

#include "effectevidencesynthesis-pskel.hxx"

#include "encounter-pskel.hxx"

#include "endpoint-pskel.hxx"

#include "enrollmentrequest-pskel.hxx"

#include "enrollmentresponse-pskel.hxx"

#include "episodeofcare-pskel.hxx"

#include "eventdefinition-pskel.hxx"

#include "evidence-pskel.hxx"

#include "evidencevariable-pskel.hxx"

#include "examplescenario-pskel.hxx"

#include "explanationofbenefit-pskel.hxx"

#include "familymemberhistory-pskel.hxx"

#include "flag-pskel.hxx"

#include "goal-pskel.hxx"

#include "graphdefinition-pskel.hxx"

#include "group-pskel.hxx"

#include "guidanceresponse-pskel.hxx"

#include "healthcareservice-pskel.hxx"

#include "imagingstudy-pskel.hxx"

#include "immunization-pskel.hxx"

#include "immunizationevaluation-pskel.hxx"

#include "immunizationrecommendation-pskel.hxx"

#include "implementationguide-pskel.hxx"

#include "insuranceplan-pskel.hxx"

#include "invoice-pskel.hxx"

#include "library-pskel.hxx"

#include "linkage-pskel.hxx"

#include "list-pskel.hxx"

#include "location-pskel.hxx"

#include "measure-pskel.hxx"

#include "measurereport-pskel.hxx"

#include "media-pskel.hxx"

#include "medication-pskel.hxx"

#include "medicationadministration-pskel.hxx"

#include "medicationdispense-pskel.hxx"

#include "medicationknowledge-pskel.hxx"

#include "medicationrequest-pskel.hxx"

#include "medicationstatement-pskel.hxx"

#include "medicinalproduct-pskel.hxx"

#include "medicinalproductauthorization-pskel.hxx"

#include "medicinalproductcontraindication-pskel.hxx"

#include "medicinalproductindication-pskel.hxx"

#include "medicinalproductingredient-pskel.hxx"

#include "medicinalproductinteraction-pskel.hxx"

#include "medicinalproductmanufactured-pskel.hxx"

#include "medicinalproductpackaged-pskel.hxx"

#include "medicinalproductpharmaceutical-pskel.hxx"

#include "medicinalproductundesirableeffect-pskel.hxx"

#include "messagedefinition-pskel.hxx"

#include "messageheader-pskel.hxx"

#include "molecularsequence-pskel.hxx"

#include "namingsystem-pskel.hxx"

#include "nutritionorder-pskel.hxx"

#include "observation-pskel.hxx"

#include "observationdefinition-pskel.hxx"

#include "operationdefinition-pskel.hxx"

#include "operationoutcome-pskel.hxx"

#include "organization-pskel.hxx"

#include "organizationaffiliation-pskel.hxx"

#include "parameters-pskel.hxx"

#include "patient-pskel.hxx"

#include "paymentnotice-pskel.hxx"

#include "paymentreconciliation-pskel.hxx"

#include "person-pskel.hxx"

#include "plandefinition-pskel.hxx"

#include "practitioner-pskel.hxx"

#include "practitionerrole-pskel.hxx"

#include "procedure-pskel.hxx"

#include "provenance-pskel.hxx"

#include "questionnaire-pskel.hxx"

#include "questionnaireresponse-pskel.hxx"

#include "relatedperson-pskel.hxx"

#include "requestgroup-pskel.hxx"

#include "researchdefinition-pskel.hxx"

#include "researchelementdefinition-pskel.hxx"

#include "researchstudy-pskel.hxx"

#include "researchsubject-pskel.hxx"

#include "riskassessment-pskel.hxx"

#include "riskevidencesynthesis-pskel.hxx"

#include "schedule-pskel.hxx"

#include "searchparameter-pskel.hxx"

#include "servicerequest-pskel.hxx"

#include "slot-pskel.hxx"

#include "specimen-pskel.hxx"

#include "specimendefinition-pskel.hxx"

#include "structuredefinition-pskel.hxx"

#include "structuremap-pskel.hxx"

#include "subscription-pskel.hxx"

#include "substance-pskel.hxx"

#include "substancenucleicacid-pskel.hxx"

#include "substancepolymer-pskel.hxx"

#include "substanceprotein-pskel.hxx"

#include "substancereferenceinformation-pskel.hxx"

#include "substancesourcematerial-pskel.hxx"

#include "substancespecification-pskel.hxx"

#include "supplydelivery-pskel.hxx"

#include "supplyrequest-pskel.hxx"

#include "task-pskel.hxx"

#include "terminologycapabilities-pskel.hxx"

#include "testreport-pskel.hxx"

#include "testscript-pskel.hxx"

#include "valueset-pskel.hxx"

#include "verificationresult-pskel.hxx"

#include "visionprescription-pskel.hxx"

namespace fhir
{
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // FHIR_ALL_PSKEL_HXX