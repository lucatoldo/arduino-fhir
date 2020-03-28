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

// Begin prologue.
//
//
// End prologue.

#include <xsde/cxx/pre.hxx>

#include "bodystructure-pskel.hxx"

namespace fhir
{
  // BodyStructure_pskel
  //

  void BodyStructure_pskel::
  identifier_parser (::fhir::Identifier_pskel& p)
  {
    this->identifier_parser_ = &p;
  }

  void BodyStructure_pskel::
  active_parser (::fhir::boolean_pskel& p)
  {
    this->active_parser_ = &p;
  }

  void BodyStructure_pskel::
  morphology_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->morphology_parser_ = &p;
  }

  void BodyStructure_pskel::
  location_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->location_parser_ = &p;
  }

  void BodyStructure_pskel::
  locationQualifier_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->locationQualifier_parser_ = &p;
  }

  void BodyStructure_pskel::
  description_parser (::fhir::string_pskel& p)
  {
    this->description_parser_ = &p;
  }

  void BodyStructure_pskel::
  image_parser (::fhir::Attachment_pskel& p)
  {
    this->image_parser_ = &p;
  }

  void BodyStructure_pskel::
  patient_parser (::fhir::Reference_pskel& p)
  {
    this->patient_parser_ = &p;
  }

  void BodyStructure_pskel::
  parsers (::fhir::id_pskel& id,
           ::fhir::Meta_pskel& meta,
           ::fhir::uri_pskel& implicitRules,
           ::fhir::code_pskel& language,
           ::fhir::Narrative_pskel& text,
           ::fhir::ResourceContainer_pskel& contained,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::Identifier_pskel& identifier,
           ::fhir::boolean_pskel& active,
           ::fhir::CodeableConcept_pskel& morphology,
           ::fhir::CodeableConcept_pskel& location,
           ::fhir::CodeableConcept_pskel& locationQualifier,
           ::fhir::string_pskel& description,
           ::fhir::Attachment_pskel& image,
           ::fhir::Reference_pskel& patient)
  {
    this->id_parser_ = &id;
    this->meta_parser_ = &meta;
    this->implicitRules_parser_ = &implicitRules;
    this->language_parser_ = &language;
    this->text_parser_ = &text;
    this->contained_parser_ = &contained;
    this->extension_parser_ = &extension;
    this->modifierExtension_parser_ = &modifierExtension;
    this->identifier_parser_ = &identifier;
    this->active_parser_ = &active;
    this->morphology_parser_ = &morphology;
    this->location_parser_ = &location;
    this->locationQualifier_parser_ = &locationQualifier;
    this->description_parser_ = &description;
    this->image_parser_ = &image;
    this->patient_parser_ = &patient;
  }

  BodyStructure_pskel::
  BodyStructure_pskel (::fhir::DomainResource_pskel* tiein)
  : ::fhir::DomainResource_pskel (tiein, 0),
    BodyStructure_impl_ (0),
    identifier_parser_ (0),
    active_parser_ (0),
    morphology_parser_ (0),
    location_parser_ (0),
    locationQualifier_parser_ (0),
    description_parser_ (0),
    image_parser_ (0),
    patient_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  BodyStructure_pskel::
  BodyStructure_pskel (BodyStructure_pskel* impl, void*)
  : ::fhir::DomainResource_pskel (impl, 0),
    BodyStructure_impl_ (impl),
    identifier_parser_ (0),
    active_parser_ (0),
    morphology_parser_ (0),
    location_parser_ (0),
    locationQualifier_parser_ (0),
    description_parser_ (0),
    image_parser_ (0),
    patient_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }
}

#include <assert.h>

namespace fhir
{
  // BodyStructure_pskel
  //

  void BodyStructure_pskel::
  identifier ()
  {
    if (this->BodyStructure_impl_)
      this->BodyStructure_impl_->identifier ();
  }

  void BodyStructure_pskel::
  active ()
  {
    if (this->BodyStructure_impl_)
      this->BodyStructure_impl_->active ();
  }

  void BodyStructure_pskel::
  morphology ()
  {
    if (this->BodyStructure_impl_)
      this->BodyStructure_impl_->morphology ();
  }

  void BodyStructure_pskel::
  location ()
  {
    if (this->BodyStructure_impl_)
      this->BodyStructure_impl_->location ();
  }

  void BodyStructure_pskel::
  locationQualifier ()
  {
    if (this->BodyStructure_impl_)
      this->BodyStructure_impl_->locationQualifier ();
  }

  void BodyStructure_pskel::
  description ()
  {
    if (this->BodyStructure_impl_)
      this->BodyStructure_impl_->description ();
  }

  void BodyStructure_pskel::
  image ()
  {
    if (this->BodyStructure_impl_)
      this->BodyStructure_impl_->image ();
  }

  void BodyStructure_pskel::
  patient ()
  {
    if (this->BodyStructure_impl_)
      this->BodyStructure_impl_->patient ();
  }

  void BodyStructure_pskel::
  post_BodyStructure ()
  {
    if (this->BodyStructure_impl_)
      this->BodyStructure_impl_->post_BodyStructure ();
    else
      post_DomainResource ();
  }

  void BodyStructure_pskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::fhir::DomainResource_pskel base;
    base::_reset ();

    this->v_state_stack_.clear ();

    this->resetting_ = true;

    if (this->identifier_parser_)
      this->identifier_parser_->_reset ();

    if (this->active_parser_)
      this->active_parser_->_reset ();

    if (this->morphology_parser_)
      this->morphology_parser_->_reset ();

    if (this->location_parser_)
      this->location_parser_->_reset ();

    if (this->locationQualifier_parser_)
      this->locationQualifier_parser_->_reset ();

    if (this->description_parser_)
      this->description_parser_->_reset ();

    if (this->image_parser_)
      this->image_parser_->_reset ();

    if (this->patient_parser_)
      this->patient_parser_->_reset ();

    this->resetting_ = false;
  }
}

#include <assert.h>

namespace fhir
{
  // Element validation and dispatch functions for BodyStructure_pskel.
  //
  bool BodyStructure_pskel::
  _start_element_impl (const ::xsde::cxx::ro_string& ns,
                       const ::xsde::cxx::ro_string& n)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    if (vd->func == 0 && vd->state == 0)
    {
      typedef ::fhir::DomainResource_pskel base;
      if (base::_start_element_impl (ns, n))
        return true;
      else
        vd->state = 1;
    }

    while (vd->func != 0)
    {
      (this->*vd->func) (vd->state, vd->count, ns, n, true);

      vd = vs.data + (vs.size - 1);

      if (vd->state == ~0UL && !ctx.error_type ())
        vd = vs.data + (--vs.size - 1);
      else
        break;
    }

    if (vd->func == 0)
    {
      if (vd->state != ~0UL)
      {
        unsigned long s = ~0UL;

        if (n == "identifier" &&
            ns == "http://hl7.org/fhir")
          s = 0UL;
        else if (n == "active" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;
        else if (n == "morphology" &&
                 ns == "http://hl7.org/fhir")
          s = 2UL;
        else if (n == "location" &&
                 ns == "http://hl7.org/fhir")
          s = 3UL;
        else if (n == "locationQualifier" &&
                 ns == "http://hl7.org/fhir")
          s = 4UL;
        else if (n == "description" &&
                 ns == "http://hl7.org/fhir")
          s = 5UL;
        else if (n == "image" &&
                 ns == "http://hl7.org/fhir")
          s = 6UL;
        else if (n == "patient" &&
                 ns == "http://hl7.org/fhir")
          s = 7UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &BodyStructure_pskel::sequence_0;
          vd->state = s;
          vd->count = 0;

          this->sequence_0 (vd->state, vd->count, ns, n, true);
        }
        else
        {
          if (vd->count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            return true;
          }

          return false;
        }
      }
      else
        return false;
    }

    return true;
  }

  bool BodyStructure_pskel::
  _end_element_impl (const ::xsde::cxx::ro_string& ns,
                     const ::xsde::cxx::ro_string& n)
  {
    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size - 1];

    if (vd.func == 0 && vd.state == 0)
    {
      typedef ::fhir::DomainResource_pskel base;
      if (!base::_end_element_impl (ns, n))
        assert (false);
      return true;
    }

    assert (vd.func != 0);
    (this->*vd.func) (vd.state, vd.count, ns, n, false);

    if (vd.state == ~0UL)
      vs.size--;

    return true;
  }

  void BodyStructure_pskel::
  _pre_e_validate ()
  {
    this->v_state_stack_.push ();
    static_cast< v_state_* > (this->v_state_stack_.top ())->size = 0;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size++];

    vd.func = 0;
    vd.state = 0;
    vd.count = 0;
    typedef ::fhir::DomainResource_pskel base;
    base::_pre_e_validate ();
  }

  void BodyStructure_pskel::
  _post_e_validate ()
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    typedef ::fhir::DomainResource_pskel base;
    base::_post_e_validate ();

    if (ctx.error_type ())
      return;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    ::xsde::cxx::ro_string empty;
    while (vd->func != 0)
    {
      (this->*vd->func) (vd->state, vd->count, empty, empty, true);

      if (ctx.error_type ())
        return;

      assert (vd->state == ~0UL);
      vd = vs.data + (--vs.size - 1);
    }

    if (vd->count < 1UL)
      this->_schema_error (::xsde::cxx::schema_error::expected_element);

    this->v_state_stack_.pop ();
  }

  void BodyStructure_pskel::
  sequence_0 (unsigned long& state,
              unsigned long& count,
              const ::xsde::cxx::ro_string& ns,
              const ::xsde::cxx::ro_string& n,
              bool start)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    XSDE_UNUSED (ctx);

    switch (state)
    {
      case 0UL:
      {
        if (n == "identifier" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->identifier_parser_)
            {
              this->identifier_parser_->pre ();
              ctx.nested_parser (this->identifier_parser_);
            }
          }
          else
          {
            if (this->identifier_parser_ != 0)
            {
              this->identifier_parser_->post_Identifier ();
              this->identifier ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 1UL;
          // Fall through.
        }
      }
      case 1UL:
      {
        if (n == "active" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->active_parser_)
            {
              this->active_parser_->pre ();
              ctx.nested_parser (this->active_parser_);
            }
          }
          else
          {
            if (this->active_parser_ != 0)
            {
              this->active_parser_->post_boolean ();
              this->active ();
            }

            count = 0;
            state = 2UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 2UL;
          // Fall through.
        }
      }
      case 2UL:
      {
        if (n == "morphology" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->morphology_parser_)
            {
              this->morphology_parser_->pre ();
              ctx.nested_parser (this->morphology_parser_);
            }
          }
          else
          {
            if (this->morphology_parser_ != 0)
            {
              this->morphology_parser_->post_CodeableConcept ();
              this->morphology ();
            }

            count = 0;
            state = 3UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 3UL;
          // Fall through.
        }
      }
      case 3UL:
      {
        if (n == "location" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->location_parser_)
            {
              this->location_parser_->pre ();
              ctx.nested_parser (this->location_parser_);
            }
          }
          else
          {
            if (this->location_parser_ != 0)
            {
              this->location_parser_->post_CodeableConcept ();
              this->location ();
            }

            count = 0;
            state = 4UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 4UL;
          // Fall through.
        }
      }
      case 4UL:
      {
        if (n == "locationQualifier" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->locationQualifier_parser_)
            {
              this->locationQualifier_parser_->pre ();
              ctx.nested_parser (this->locationQualifier_parser_);
            }
          }
          else
          {
            if (this->locationQualifier_parser_ != 0)
            {
              this->locationQualifier_parser_->post_CodeableConcept ();
              this->locationQualifier ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 5UL;
          // Fall through.
        }
      }
      case 5UL:
      {
        if (n == "description" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->description_parser_)
            {
              this->description_parser_->pre ();
              ctx.nested_parser (this->description_parser_);
            }
          }
          else
          {
            if (this->description_parser_ != 0)
            {
              this->description_parser_->post_string ();
              this->description ();
            }

            count = 0;
            state = 6UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 6UL;
          // Fall through.
        }
      }
      case 6UL:
      {
        if (n == "image" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->image_parser_)
            {
              this->image_parser_->pre ();
              ctx.nested_parser (this->image_parser_);
            }
          }
          else
          {
            if (this->image_parser_ != 0)
            {
              this->image_parser_->post_Attachment ();
              this->image ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 7UL;
          // Fall through.
        }
      }
      case 7UL:
      {
        if (n == "patient" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->patient_parser_)
            {
              this->patient_parser_->pre ();
              ctx.nested_parser (this->patient_parser_);
            }
          }
          else
          {
            if (this->patient_parser_ != 0)
            {
              this->patient_parser_->post_Reference ();
              this->patient ();
            }

            count = 0;
            state = ~0UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            break;
          }

          count = 0;
          state = ~0UL;
          // Fall through.
        }
      }
      case ~0UL:
        break;
    }
  }
}

namespace fhir
{
}

namespace fhir
{
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
