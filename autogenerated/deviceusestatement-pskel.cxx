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

#include "deviceusestatement-pskel.hxx"

namespace fhir
{
  // DeviceUseStatement_pskel
  //

  void DeviceUseStatement_pskel::
  identifier_parser (::fhir::Identifier_pskel& p)
  {
    this->identifier_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  basedOn_parser (::fhir::Reference_pskel& p)
  {
    this->basedOn_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  status_parser (::fhir::DeviceUseStatementStatus_pskel& p)
  {
    this->status_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  subject_parser (::fhir::Reference_pskel& p)
  {
    this->subject_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  derivedFrom_parser (::fhir::Reference_pskel& p)
  {
    this->derivedFrom_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  timingTiming_parser (::fhir::Timing_pskel& p)
  {
    this->timingTiming_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  timingPeriod_parser (::fhir::Period_pskel& p)
  {
    this->timingPeriod_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  timingDateTime_parser (::fhir::dateTime_pskel& p)
  {
    this->timingDateTime_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  recordedOn_parser (::fhir::dateTime_pskel& p)
  {
    this->recordedOn_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  source_parser (::fhir::Reference_pskel& p)
  {
    this->source_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  device_parser (::fhir::Reference_pskel& p)
  {
    this->device_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  reasonCode_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->reasonCode_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  reasonReference_parser (::fhir::Reference_pskel& p)
  {
    this->reasonReference_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  bodySite_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->bodySite_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  note_parser (::fhir::Annotation_pskel& p)
  {
    this->note_parser_ = &p;
  }

  void DeviceUseStatement_pskel::
  parsers (::fhir::id_pskel& id,
           ::fhir::Meta_pskel& meta,
           ::fhir::uri_pskel& implicitRules,
           ::fhir::code_pskel& language,
           ::fhir::Narrative_pskel& text,
           ::fhir::ResourceContainer_pskel& contained,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::Identifier_pskel& identifier,
           ::fhir::Reference_pskel& basedOn,
           ::fhir::DeviceUseStatementStatus_pskel& status,
           ::fhir::Reference_pskel& subject,
           ::fhir::Reference_pskel& derivedFrom,
           ::fhir::Timing_pskel& timingTiming,
           ::fhir::Period_pskel& timingPeriod,
           ::fhir::dateTime_pskel& timingDateTime,
           ::fhir::dateTime_pskel& recordedOn,
           ::fhir::Reference_pskel& source,
           ::fhir::Reference_pskel& device,
           ::fhir::CodeableConcept_pskel& reasonCode,
           ::fhir::Reference_pskel& reasonReference,
           ::fhir::CodeableConcept_pskel& bodySite,
           ::fhir::Annotation_pskel& note)
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
    this->basedOn_parser_ = &basedOn;
    this->status_parser_ = &status;
    this->subject_parser_ = &subject;
    this->derivedFrom_parser_ = &derivedFrom;
    this->timingTiming_parser_ = &timingTiming;
    this->timingPeriod_parser_ = &timingPeriod;
    this->timingDateTime_parser_ = &timingDateTime;
    this->recordedOn_parser_ = &recordedOn;
    this->source_parser_ = &source;
    this->device_parser_ = &device;
    this->reasonCode_parser_ = &reasonCode;
    this->reasonReference_parser_ = &reasonReference;
    this->bodySite_parser_ = &bodySite;
    this->note_parser_ = &note;
  }

  DeviceUseStatement_pskel::
  DeviceUseStatement_pskel (::fhir::DomainResource_pskel* tiein)
  : ::fhir::DomainResource_pskel (tiein, 0),
    DeviceUseStatement_impl_ (0),
    identifier_parser_ (0),
    basedOn_parser_ (0),
    status_parser_ (0),
    subject_parser_ (0),
    derivedFrom_parser_ (0),
    timingTiming_parser_ (0),
    timingPeriod_parser_ (0),
    timingDateTime_parser_ (0),
    recordedOn_parser_ (0),
    source_parser_ (0),
    device_parser_ (0),
    reasonCode_parser_ (0),
    reasonReference_parser_ (0),
    bodySite_parser_ (0),
    note_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  DeviceUseStatement_pskel::
  DeviceUseStatement_pskel (DeviceUseStatement_pskel* impl, void*)
  : ::fhir::DomainResource_pskel (impl, 0),
    DeviceUseStatement_impl_ (impl),
    identifier_parser_ (0),
    basedOn_parser_ (0),
    status_parser_ (0),
    subject_parser_ (0),
    derivedFrom_parser_ (0),
    timingTiming_parser_ (0),
    timingPeriod_parser_ (0),
    timingDateTime_parser_ (0),
    recordedOn_parser_ (0),
    source_parser_ (0),
    device_parser_ (0),
    reasonCode_parser_ (0),
    reasonReference_parser_ (0),
    bodySite_parser_ (0),
    note_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  // DeviceUseStatementStatus_list_pskel
  //

  DeviceUseStatementStatus_list_pskel::
  DeviceUseStatementStatus_list_pskel (::fhir::code_primitive_pskel* tiein)
  : ::fhir::code_primitive_pskel (tiein, 0),
    DeviceUseStatementStatus_list_impl_ (0)
  {
    this->_enumeration_facet (_xsde_DeviceUseStatementStatus_list_pskel_enums_, 6UL);
  }

  DeviceUseStatementStatus_list_pskel::
  DeviceUseStatementStatus_list_pskel (DeviceUseStatementStatus_list_pskel* impl, void*)
  : ::fhir::code_primitive_pskel (impl, 0),
    DeviceUseStatementStatus_list_impl_ (impl)
  {
    this->_enumeration_facet (_xsde_DeviceUseStatementStatus_list_pskel_enums_, 6UL);
  }

  // DeviceUseStatementStatus_pskel
  //

  void DeviceUseStatementStatus_pskel::
  value_parser (::fhir::DeviceUseStatementStatus_list_pskel& p)
  {
    this->value_parser_ = &p;
  }

  void DeviceUseStatementStatus_pskel::
  parsers (::fhir::string_primitive_pskel& id,
           ::fhir::Extension_pskel& extension,
           ::fhir::DeviceUseStatementStatus_list_pskel& value)
  {
    this->id_parser_ = &id;
    this->extension_parser_ = &extension;
    this->value_parser_ = &value;
  }

  DeviceUseStatementStatus_pskel::
  DeviceUseStatementStatus_pskel (::fhir::Element_pskel* tiein)
  : ::fhir::Element_pskel (tiein, 0),
    DeviceUseStatementStatus_impl_ (0),
    value_parser_ (0)
  {
  }

  DeviceUseStatementStatus_pskel::
  DeviceUseStatementStatus_pskel (DeviceUseStatementStatus_pskel* impl, void*)
  : ::fhir::Element_pskel (impl, 0),
    DeviceUseStatementStatus_impl_ (impl),
    value_parser_ (0)
  {
  }
}

#include <assert.h>

namespace fhir
{
  // DeviceUseStatement_pskel
  //

  void DeviceUseStatement_pskel::
  identifier ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->identifier ();
  }

  void DeviceUseStatement_pskel::
  basedOn ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->basedOn ();
  }

  void DeviceUseStatement_pskel::
  status ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->status ();
  }

  void DeviceUseStatement_pskel::
  subject ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->subject ();
  }

  void DeviceUseStatement_pskel::
  derivedFrom ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->derivedFrom ();
  }

  void DeviceUseStatement_pskel::
  timingTiming ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->timingTiming ();
  }

  void DeviceUseStatement_pskel::
  timingPeriod ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->timingPeriod ();
  }

  void DeviceUseStatement_pskel::
  timingDateTime ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->timingDateTime ();
  }

  void DeviceUseStatement_pskel::
  recordedOn ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->recordedOn ();
  }

  void DeviceUseStatement_pskel::
  source ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->source ();
  }

  void DeviceUseStatement_pskel::
  device ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->device ();
  }

  void DeviceUseStatement_pskel::
  reasonCode ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->reasonCode ();
  }

  void DeviceUseStatement_pskel::
  reasonReference ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->reasonReference ();
  }

  void DeviceUseStatement_pskel::
  bodySite ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->bodySite ();
  }

  void DeviceUseStatement_pskel::
  note ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->note ();
  }

  void DeviceUseStatement_pskel::
  post_DeviceUseStatement ()
  {
    if (this->DeviceUseStatement_impl_)
      this->DeviceUseStatement_impl_->post_DeviceUseStatement ();
    else
      post_DomainResource ();
  }

  void DeviceUseStatement_pskel::
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

    if (this->basedOn_parser_)
      this->basedOn_parser_->_reset ();

    if (this->status_parser_)
      this->status_parser_->_reset ();

    if (this->subject_parser_)
      this->subject_parser_->_reset ();

    if (this->derivedFrom_parser_)
      this->derivedFrom_parser_->_reset ();

    if (this->timingTiming_parser_)
      this->timingTiming_parser_->_reset ();

    if (this->timingPeriod_parser_)
      this->timingPeriod_parser_->_reset ();

    if (this->timingDateTime_parser_)
      this->timingDateTime_parser_->_reset ();

    if (this->recordedOn_parser_)
      this->recordedOn_parser_->_reset ();

    if (this->source_parser_)
      this->source_parser_->_reset ();

    if (this->device_parser_)
      this->device_parser_->_reset ();

    if (this->reasonCode_parser_)
      this->reasonCode_parser_->_reset ();

    if (this->reasonReference_parser_)
      this->reasonReference_parser_->_reset ();

    if (this->bodySite_parser_)
      this->bodySite_parser_->_reset ();

    if (this->note_parser_)
      this->note_parser_->_reset ();

    this->resetting_ = false;
  }

  // DeviceUseStatementStatus_list_pskel
  //

  void DeviceUseStatementStatus_list_pskel::
  post_DeviceUseStatementStatus_list ()
  {
    if (this->DeviceUseStatementStatus_list_impl_)
      this->DeviceUseStatementStatus_list_impl_->post_DeviceUseStatementStatus_list ();
    else
      post_code_primitive ();
  }

  const char* const DeviceUseStatementStatus_list_pskel::_xsde_DeviceUseStatementStatus_list_pskel_enums_[6UL] = 
  {
    "active",
    "completed",
    "entered-in-error",
    "intended",
    "on-hold",
    "stopped"
  };

  // DeviceUseStatementStatus_pskel
  //

  void DeviceUseStatementStatus_pskel::
  value ()
  {
    if (this->DeviceUseStatementStatus_impl_)
      this->DeviceUseStatementStatus_impl_->value ();
  }

  void DeviceUseStatementStatus_pskel::
  post_DeviceUseStatementStatus ()
  {
    if (this->DeviceUseStatementStatus_impl_)
      this->DeviceUseStatementStatus_impl_->post_DeviceUseStatementStatus ();
    else
      post_Element ();
  }

  void DeviceUseStatementStatus_pskel::
  _reset ()
  {
    typedef ::fhir::Element_pskel base;
    base::_reset ();

    if (this->value_parser_)
      this->value_parser_->_reset ();
  }
}

#include <assert.h>

namespace fhir
{
  // Element validation and dispatch functions for DeviceUseStatement_pskel.
  //
  bool DeviceUseStatement_pskel::
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
        else if (n == "basedOn" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;
        else if (n == "status" &&
                 ns == "http://hl7.org/fhir")
          s = 2UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &DeviceUseStatement_pskel::sequence_0;
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

  bool DeviceUseStatement_pskel::
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

  void DeviceUseStatement_pskel::
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

  void DeviceUseStatement_pskel::
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

  void DeviceUseStatement_pskel::
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
        if (n == "basedOn" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->basedOn_parser_)
            {
              this->basedOn_parser_->pre ();
              ctx.nested_parser (this->basedOn_parser_);
            }
          }
          else
          {
            if (this->basedOn_parser_ != 0)
            {
              this->basedOn_parser_->post_Reference ();
              this->basedOn ();
            }

            count++;
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
        if (n == "status" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->status_parser_)
            {
              this->status_parser_->pre ();
              ctx.nested_parser (this->status_parser_);
            }
          }
          else
          {
            if (this->status_parser_ != 0)
            {
              this->status_parser_->post_DeviceUseStatementStatus ();
              this->status ();
            }

            count = 0;
            state = 3UL;
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
          state = 3UL;
          // Fall through.
        }
      }
      case 3UL:
      {
        if (n == "subject" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->subject_parser_)
            {
              this->subject_parser_->pre ();
              ctx.nested_parser (this->subject_parser_);
            }
          }
          else
          {
            if (this->subject_parser_ != 0)
            {
              this->subject_parser_->post_Reference ();
              this->subject ();
            }

            count = 0;
            state = 4UL;
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
          state = 4UL;
          // Fall through.
        }
      }
      case 4UL:
      {
        if (n == "derivedFrom" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->derivedFrom_parser_)
            {
              this->derivedFrom_parser_->pre ();
              ctx.nested_parser (this->derivedFrom_parser_);
            }
          }
          else
          {
            if (this->derivedFrom_parser_ != 0)
            {
              this->derivedFrom_parser_->post_Reference ();
              this->derivedFrom ();
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
        if (n == "timingTiming" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->timingTiming_parser_)
            {
              this->timingTiming_parser_->pre ();
              ctx.nested_parser (this->timingTiming_parser_);
            }
          }
          else
          {
            if (this->timingTiming_parser_ != 0)
            {
              this->timingTiming_parser_->post_Timing ();
              this->timingTiming ();
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
        if (n == "timingPeriod" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->timingPeriod_parser_)
            {
              this->timingPeriod_parser_->pre ();
              ctx.nested_parser (this->timingPeriod_parser_);
            }
          }
          else
          {
            if (this->timingPeriod_parser_ != 0)
            {
              this->timingPeriod_parser_->post_Period ();
              this->timingPeriod ();
            }

            count = 0;
            state = 7UL;
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
        if (n == "timingDateTime" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->timingDateTime_parser_)
            {
              this->timingDateTime_parser_->pre ();
              ctx.nested_parser (this->timingDateTime_parser_);
            }
          }
          else
          {
            if (this->timingDateTime_parser_ != 0)
            {
              this->timingDateTime_parser_->post_dateTime ();
              this->timingDateTime ();
            }

            count = 0;
            state = 8UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 8UL;
          // Fall through.
        }
      }
      case 8UL:
      {
        if (n == "recordedOn" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->recordedOn_parser_)
            {
              this->recordedOn_parser_->pre ();
              ctx.nested_parser (this->recordedOn_parser_);
            }
          }
          else
          {
            if (this->recordedOn_parser_ != 0)
            {
              this->recordedOn_parser_->post_dateTime ();
              this->recordedOn ();
            }

            count = 0;
            state = 9UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 9UL;
          // Fall through.
        }
      }
      case 9UL:
      {
        if (n == "source" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->source_parser_)
            {
              this->source_parser_->pre ();
              ctx.nested_parser (this->source_parser_);
            }
          }
          else
          {
            if (this->source_parser_ != 0)
            {
              this->source_parser_->post_Reference ();
              this->source ();
            }

            count = 0;
            state = 10UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 10UL;
          // Fall through.
        }
      }
      case 10UL:
      {
        if (n == "device" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->device_parser_)
            {
              this->device_parser_->pre ();
              ctx.nested_parser (this->device_parser_);
            }
          }
          else
          {
            if (this->device_parser_ != 0)
            {
              this->device_parser_->post_Reference ();
              this->device ();
            }

            count = 0;
            state = 11UL;
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
          state = 11UL;
          // Fall through.
        }
      }
      case 11UL:
      {
        if (n == "reasonCode" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->reasonCode_parser_)
            {
              this->reasonCode_parser_->pre ();
              ctx.nested_parser (this->reasonCode_parser_);
            }
          }
          else
          {
            if (this->reasonCode_parser_ != 0)
            {
              this->reasonCode_parser_->post_CodeableConcept ();
              this->reasonCode ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 12UL;
          // Fall through.
        }
      }
      case 12UL:
      {
        if (n == "reasonReference" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->reasonReference_parser_)
            {
              this->reasonReference_parser_->pre ();
              ctx.nested_parser (this->reasonReference_parser_);
            }
          }
          else
          {
            if (this->reasonReference_parser_ != 0)
            {
              this->reasonReference_parser_->post_Reference ();
              this->reasonReference ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 13UL;
          // Fall through.
        }
      }
      case 13UL:
      {
        if (n == "bodySite" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->bodySite_parser_)
            {
              this->bodySite_parser_->pre ();
              ctx.nested_parser (this->bodySite_parser_);
            }
          }
          else
          {
            if (this->bodySite_parser_ != 0)
            {
              this->bodySite_parser_->post_CodeableConcept ();
              this->bodySite ();
            }

            count = 0;
            state = 14UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 14UL;
          // Fall through.
        }
      }
      case 14UL:
      {
        if (n == "note" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->note_parser_)
            {
              this->note_parser_->pre ();
              ctx.nested_parser (this->note_parser_);
            }
          }
          else
          {
            if (this->note_parser_ != 0)
            {
              this->note_parser_->post_Annotation ();
              this->note ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
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
  // Attribute validation and dispatch functions for DeviceUseStatementStatus_pskel.
  //
  bool DeviceUseStatementStatus_pskel::
  _attribute_impl_phase_one (const ::xsde::cxx::ro_string& ns,
                             const ::xsde::cxx::ro_string& n,
                             const ::xsde::cxx::ro_string& s)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    if (n == "value" && ns.empty ())
    {
      if (this->value_parser_)
      {
        this->value_parser_->pre ();

        this->value_parser_->_pre_impl (ctx);

        if (!ctx.error_type ())
          this->value_parser_->_characters (s);

        if (!ctx.error_type ())
          this->value_parser_->_post_impl ();

        if (!ctx.error_type ())
          this->value_parser_->post_DeviceUseStatementStatus_list ();

        this->value ();
      }

      return true;
    }

    typedef ::fhir::Element_pskel base;
    return base::_attribute_impl_phase_one (ns, n, s);
  }
}

namespace fhir
{
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

