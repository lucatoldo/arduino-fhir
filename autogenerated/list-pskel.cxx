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

#include "list-pskel.hxx"

namespace fhir
{
  // List_pskel
  //

  void List_pskel::
  identifier_parser (::fhir::Identifier_pskel& p)
  {
    this->identifier_parser_ = &p;
  }

  void List_pskel::
  status_parser (::fhir::ListStatus_pskel& p)
  {
    this->status_parser_ = &p;
  }

  void List_pskel::
  mode_parser (::fhir::ListMode_pskel& p)
  {
    this->mode_parser_ = &p;
  }

  void List_pskel::
  title_parser (::fhir::string_pskel& p)
  {
    this->title_parser_ = &p;
  }

  void List_pskel::
  code_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->code_parser_ = &p;
  }

  void List_pskel::
  subject_parser (::fhir::Reference_pskel& p)
  {
    this->subject_parser_ = &p;
  }

  void List_pskel::
  encounter_parser (::fhir::Reference_pskel& p)
  {
    this->encounter_parser_ = &p;
  }

  void List_pskel::
  date_parser (::fhir::dateTime_pskel& p)
  {
    this->date_parser_ = &p;
  }

  void List_pskel::
  source_parser (::fhir::Reference_pskel& p)
  {
    this->source_parser_ = &p;
  }

  void List_pskel::
  orderedBy_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->orderedBy_parser_ = &p;
  }

  void List_pskel::
  note_parser (::fhir::Annotation_pskel& p)
  {
    this->note_parser_ = &p;
  }

  void List_pskel::
  entry_parser (::fhir::List_Entry_pskel& p)
  {
    this->entry_parser_ = &p;
  }

  void List_pskel::
  emptyReason_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->emptyReason_parser_ = &p;
  }

  void List_pskel::
  parsers (::fhir::id_pskel& id,
           ::fhir::Meta_pskel& meta,
           ::fhir::uri_pskel& implicitRules,
           ::fhir::code_pskel& language,
           ::fhir::Narrative_pskel& text,
           ::fhir::ResourceContainer_pskel& contained,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::Identifier_pskel& identifier,
           ::fhir::ListStatus_pskel& status,
           ::fhir::ListMode_pskel& mode,
           ::fhir::string_pskel& title,
           ::fhir::CodeableConcept_pskel& code,
           ::fhir::Reference_pskel& subject,
           ::fhir::Reference_pskel& encounter,
           ::fhir::dateTime_pskel& date,
           ::fhir::Reference_pskel& source,
           ::fhir::CodeableConcept_pskel& orderedBy,
           ::fhir::Annotation_pskel& note,
           ::fhir::List_Entry_pskel& entry,
           ::fhir::CodeableConcept_pskel& emptyReason)
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
    this->status_parser_ = &status;
    this->mode_parser_ = &mode;
    this->title_parser_ = &title;
    this->code_parser_ = &code;
    this->subject_parser_ = &subject;
    this->encounter_parser_ = &encounter;
    this->date_parser_ = &date;
    this->source_parser_ = &source;
    this->orderedBy_parser_ = &orderedBy;
    this->note_parser_ = &note;
    this->entry_parser_ = &entry;
    this->emptyReason_parser_ = &emptyReason;
  }

  List_pskel::
  List_pskel (::fhir::DomainResource_pskel* tiein)
  : ::fhir::DomainResource_pskel (tiein, 0),
    List_impl_ (0),
    identifier_parser_ (0),
    status_parser_ (0),
    mode_parser_ (0),
    title_parser_ (0),
    code_parser_ (0),
    subject_parser_ (0),
    encounter_parser_ (0),
    date_parser_ (0),
    source_parser_ (0),
    orderedBy_parser_ (0),
    note_parser_ (0),
    entry_parser_ (0),
    emptyReason_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  List_pskel::
  List_pskel (List_pskel* impl, void*)
  : ::fhir::DomainResource_pskel (impl, 0),
    List_impl_ (impl),
    identifier_parser_ (0),
    status_parser_ (0),
    mode_parser_ (0),
    title_parser_ (0),
    code_parser_ (0),
    subject_parser_ (0),
    encounter_parser_ (0),
    date_parser_ (0),
    source_parser_ (0),
    orderedBy_parser_ (0),
    note_parser_ (0),
    entry_parser_ (0),
    emptyReason_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  // List_Entry_pskel
  //

  void List_Entry_pskel::
  flag_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->flag_parser_ = &p;
  }

  void List_Entry_pskel::
  deleted_parser (::fhir::boolean_pskel& p)
  {
    this->deleted_parser_ = &p;
  }

  void List_Entry_pskel::
  date_parser (::fhir::dateTime_pskel& p)
  {
    this->date_parser_ = &p;
  }

  void List_Entry_pskel::
  item_parser (::fhir::Reference_pskel& p)
  {
    this->item_parser_ = &p;
  }

  void List_Entry_pskel::
  parsers (::fhir::string_primitive_pskel& id,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::CodeableConcept_pskel& flag,
           ::fhir::boolean_pskel& deleted,
           ::fhir::dateTime_pskel& date,
           ::fhir::Reference_pskel& item)
  {
    this->id_parser_ = &id;
    this->extension_parser_ = &extension;
    this->modifierExtension_parser_ = &modifierExtension;
    this->flag_parser_ = &flag;
    this->deleted_parser_ = &deleted;
    this->date_parser_ = &date;
    this->item_parser_ = &item;
  }

  List_Entry_pskel::
  List_Entry_pskel (::fhir::BackboneElement_pskel* tiein)
  : ::fhir::BackboneElement_pskel (tiein, 0),
    List_Entry_impl_ (0),
    flag_parser_ (0),
    deleted_parser_ (0),
    date_parser_ (0),
    item_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  List_Entry_pskel::
  List_Entry_pskel (List_Entry_pskel* impl, void*)
  : ::fhir::BackboneElement_pskel (impl, 0),
    List_Entry_impl_ (impl),
    flag_parser_ (0),
    deleted_parser_ (0),
    date_parser_ (0),
    item_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  // ListStatus_list_pskel
  //

  ListStatus_list_pskel::
  ListStatus_list_pskel (::fhir::code_primitive_pskel* tiein)
  : ::fhir::code_primitive_pskel (tiein, 0),
    ListStatus_list_impl_ (0)
  {
    this->_enumeration_facet (_xsde_ListStatus_list_pskel_enums_, 3UL);
  }

  ListStatus_list_pskel::
  ListStatus_list_pskel (ListStatus_list_pskel* impl, void*)
  : ::fhir::code_primitive_pskel (impl, 0),
    ListStatus_list_impl_ (impl)
  {
    this->_enumeration_facet (_xsde_ListStatus_list_pskel_enums_, 3UL);
  }

  // ListStatus_pskel
  //

  void ListStatus_pskel::
  value_parser (::fhir::ListStatus_list_pskel& p)
  {
    this->value_parser_ = &p;
  }

  void ListStatus_pskel::
  parsers (::fhir::string_primitive_pskel& id,
           ::fhir::Extension_pskel& extension,
           ::fhir::ListStatus_list_pskel& value)
  {
    this->id_parser_ = &id;
    this->extension_parser_ = &extension;
    this->value_parser_ = &value;
  }

  ListStatus_pskel::
  ListStatus_pskel (::fhir::Element_pskel* tiein)
  : ::fhir::Element_pskel (tiein, 0),
    ListStatus_impl_ (0),
    value_parser_ (0)
  {
  }

  ListStatus_pskel::
  ListStatus_pskel (ListStatus_pskel* impl, void*)
  : ::fhir::Element_pskel (impl, 0),
    ListStatus_impl_ (impl),
    value_parser_ (0)
  {
  }
}

#include <assert.h>

namespace fhir
{
  // List_pskel
  //

  void List_pskel::
  identifier ()
  {
    if (this->List_impl_)
      this->List_impl_->identifier ();
  }

  void List_pskel::
  status ()
  {
    if (this->List_impl_)
      this->List_impl_->status ();
  }

  void List_pskel::
  mode ()
  {
    if (this->List_impl_)
      this->List_impl_->mode ();
  }

  void List_pskel::
  title ()
  {
    if (this->List_impl_)
      this->List_impl_->title ();
  }

  void List_pskel::
  code ()
  {
    if (this->List_impl_)
      this->List_impl_->code ();
  }

  void List_pskel::
  subject ()
  {
    if (this->List_impl_)
      this->List_impl_->subject ();
  }

  void List_pskel::
  encounter ()
  {
    if (this->List_impl_)
      this->List_impl_->encounter ();
  }

  void List_pskel::
  date ()
  {
    if (this->List_impl_)
      this->List_impl_->date ();
  }

  void List_pskel::
  source ()
  {
    if (this->List_impl_)
      this->List_impl_->source ();
  }

  void List_pskel::
  orderedBy ()
  {
    if (this->List_impl_)
      this->List_impl_->orderedBy ();
  }

  void List_pskel::
  note ()
  {
    if (this->List_impl_)
      this->List_impl_->note ();
  }

  void List_pskel::
  entry ()
  {
    if (this->List_impl_)
      this->List_impl_->entry ();
  }

  void List_pskel::
  emptyReason ()
  {
    if (this->List_impl_)
      this->List_impl_->emptyReason ();
  }

  void List_pskel::
  post_List ()
  {
    if (this->List_impl_)
      this->List_impl_->post_List ();
    else
      post_DomainResource ();
  }

  void List_pskel::
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

    if (this->status_parser_)
      this->status_parser_->_reset ();

    if (this->mode_parser_)
      this->mode_parser_->_reset ();

    if (this->title_parser_)
      this->title_parser_->_reset ();

    if (this->code_parser_)
      this->code_parser_->_reset ();

    if (this->subject_parser_)
      this->subject_parser_->_reset ();

    if (this->encounter_parser_)
      this->encounter_parser_->_reset ();

    if (this->date_parser_)
      this->date_parser_->_reset ();

    if (this->source_parser_)
      this->source_parser_->_reset ();

    if (this->orderedBy_parser_)
      this->orderedBy_parser_->_reset ();

    if (this->note_parser_)
      this->note_parser_->_reset ();

    if (this->entry_parser_)
      this->entry_parser_->_reset ();

    if (this->emptyReason_parser_)
      this->emptyReason_parser_->_reset ();

    this->resetting_ = false;
  }

  // List_Entry_pskel
  //

  void List_Entry_pskel::
  flag ()
  {
    if (this->List_Entry_impl_)
      this->List_Entry_impl_->flag ();
  }

  void List_Entry_pskel::
  deleted ()
  {
    if (this->List_Entry_impl_)
      this->List_Entry_impl_->deleted ();
  }

  void List_Entry_pskel::
  date ()
  {
    if (this->List_Entry_impl_)
      this->List_Entry_impl_->date ();
  }

  void List_Entry_pskel::
  item ()
  {
    if (this->List_Entry_impl_)
      this->List_Entry_impl_->item ();
  }

  void List_Entry_pskel::
  post_List_Entry ()
  {
    if (this->List_Entry_impl_)
      this->List_Entry_impl_->post_List_Entry ();
    else
      post_BackboneElement ();
  }

  void List_Entry_pskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::fhir::BackboneElement_pskel base;
    base::_reset ();

    this->v_state_stack_.clear ();

    this->resetting_ = true;

    if (this->flag_parser_)
      this->flag_parser_->_reset ();

    if (this->deleted_parser_)
      this->deleted_parser_->_reset ();

    if (this->date_parser_)
      this->date_parser_->_reset ();

    if (this->item_parser_)
      this->item_parser_->_reset ();

    this->resetting_ = false;
  }

  // ListStatus_list_pskel
  //

  void ListStatus_list_pskel::
  post_ListStatus_list ()
  {
    if (this->ListStatus_list_impl_)
      this->ListStatus_list_impl_->post_ListStatus_list ();
    else
      post_code_primitive ();
  }

  const char* const ListStatus_list_pskel::_xsde_ListStatus_list_pskel_enums_[3UL] = 
  {
    "current",
    "entered-in-error",
    "retired"
  };

  // ListStatus_pskel
  //

  void ListStatus_pskel::
  value ()
  {
    if (this->ListStatus_impl_)
      this->ListStatus_impl_->value ();
  }

  void ListStatus_pskel::
  post_ListStatus ()
  {
    if (this->ListStatus_impl_)
      this->ListStatus_impl_->post_ListStatus ();
    else
      post_Element ();
  }

  void ListStatus_pskel::
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
  // Element validation and dispatch functions for List_pskel.
  //
  bool List_pskel::
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
        else if (n == "status" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &List_pskel::sequence_0;
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

  bool List_pskel::
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

  void List_pskel::
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

  void List_pskel::
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

  void List_pskel::
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
              this->status_parser_->post_ListStatus ();
              this->status ();
            }

            count = 0;
            state = 2UL;
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
          state = 2UL;
          // Fall through.
        }
      }
      case 2UL:
      {
        if (n == "mode" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->mode_parser_)
            {
              this->mode_parser_->pre ();
              ctx.nested_parser (this->mode_parser_);
            }
          }
          else
          {
            if (this->mode_parser_ != 0)
            {
              this->mode_parser_->post_ListMode ();
              this->mode ();
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
        if (n == "title" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->title_parser_)
            {
              this->title_parser_->pre ();
              ctx.nested_parser (this->title_parser_);
            }
          }
          else
          {
            if (this->title_parser_ != 0)
            {
              this->title_parser_->post_string ();
              this->title ();
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
        if (n == "code" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->code_parser_)
            {
              this->code_parser_->pre ();
              ctx.nested_parser (this->code_parser_);
            }
          }
          else
          {
            if (this->code_parser_ != 0)
            {
              this->code_parser_->post_CodeableConcept ();
              this->code ();
            }

            count = 0;
            state = 5UL;
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
        if (n == "encounter" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->encounter_parser_)
            {
              this->encounter_parser_->pre ();
              ctx.nested_parser (this->encounter_parser_);
            }
          }
          else
          {
            if (this->encounter_parser_ != 0)
            {
              this->encounter_parser_->post_Reference ();
              this->encounter ();
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
        if (n == "date" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->date_parser_)
            {
              this->date_parser_->pre ();
              ctx.nested_parser (this->date_parser_);
            }
          }
          else
          {
            if (this->date_parser_ != 0)
            {
              this->date_parser_->post_dateTime ();
              this->date ();
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
        if (n == "orderedBy" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->orderedBy_parser_)
            {
              this->orderedBy_parser_->pre ();
              ctx.nested_parser (this->orderedBy_parser_);
            }
          }
          else
          {
            if (this->orderedBy_parser_ != 0)
            {
              this->orderedBy_parser_->post_CodeableConcept ();
              this->orderedBy ();
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
          state = 11UL;
          // Fall through.
        }
      }
      case 11UL:
      {
        if (n == "entry" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->entry_parser_)
            {
              this->entry_parser_->pre ();
              ctx.nested_parser (this->entry_parser_);
            }
          }
          else
          {
            if (this->entry_parser_ != 0)
            {
              this->entry_parser_->post_List_Entry ();
              this->entry ();
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
        if (n == "emptyReason" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->emptyReason_parser_)
            {
              this->emptyReason_parser_->pre ();
              ctx.nested_parser (this->emptyReason_parser_);
            }
          }
          else
          {
            if (this->emptyReason_parser_ != 0)
            {
              this->emptyReason_parser_->post_CodeableConcept ();
              this->emptyReason ();
            }

            count = 0;
            state = ~0UL;
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

  // Element validation and dispatch functions for List_Entry_pskel.
  //
  bool List_Entry_pskel::
  _start_element_impl (const ::xsde::cxx::ro_string& ns,
                       const ::xsde::cxx::ro_string& n)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    if (vd->func == 0 && vd->state == 0)
    {
      typedef ::fhir::BackboneElement_pskel base;
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

        if (n == "flag" &&
            ns == "http://hl7.org/fhir")
          s = 0UL;
        else if (n == "deleted" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;
        else if (n == "date" &&
                 ns == "http://hl7.org/fhir")
          s = 2UL;
        else if (n == "item" &&
                 ns == "http://hl7.org/fhir")
          s = 3UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &List_Entry_pskel::sequence_0;
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

  bool List_Entry_pskel::
  _end_element_impl (const ::xsde::cxx::ro_string& ns,
                     const ::xsde::cxx::ro_string& n)
  {
    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size - 1];

    if (vd.func == 0 && vd.state == 0)
    {
      typedef ::fhir::BackboneElement_pskel base;
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

  void List_Entry_pskel::
  _pre_e_validate ()
  {
    this->v_state_stack_.push ();
    static_cast< v_state_* > (this->v_state_stack_.top ())->size = 0;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size++];

    vd.func = 0;
    vd.state = 0;
    vd.count = 0;
    typedef ::fhir::BackboneElement_pskel base;
    base::_pre_e_validate ();
  }

  void List_Entry_pskel::
  _post_e_validate ()
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    typedef ::fhir::BackboneElement_pskel base;
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

  void List_Entry_pskel::
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
        if (n == "flag" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->flag_parser_)
            {
              this->flag_parser_->pre ();
              ctx.nested_parser (this->flag_parser_);
            }
          }
          else
          {
            if (this->flag_parser_ != 0)
            {
              this->flag_parser_->post_CodeableConcept ();
              this->flag ();
            }

            count = 0;
            state = 1UL;
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
        if (n == "deleted" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->deleted_parser_)
            {
              this->deleted_parser_->pre ();
              ctx.nested_parser (this->deleted_parser_);
            }
          }
          else
          {
            if (this->deleted_parser_ != 0)
            {
              this->deleted_parser_->post_boolean ();
              this->deleted ();
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
        if (n == "date" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->date_parser_)
            {
              this->date_parser_->pre ();
              ctx.nested_parser (this->date_parser_);
            }
          }
          else
          {
            if (this->date_parser_ != 0)
            {
              this->date_parser_->post_dateTime ();
              this->date ();
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
        if (n == "item" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->item_parser_)
            {
              this->item_parser_->pre ();
              ctx.nested_parser (this->item_parser_);
            }
          }
          else
          {
            if (this->item_parser_ != 0)
            {
              this->item_parser_->post_Reference ();
              this->item ();
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
  // Attribute validation and dispatch functions for ListStatus_pskel.
  //
  bool ListStatus_pskel::
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
          this->value_parser_->post_ListStatus_list ();

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

