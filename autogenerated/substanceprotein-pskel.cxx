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

#include "substanceprotein-pskel.hxx"

namespace fhir
{
  // SubstanceProtein_pskel
  //

  void SubstanceProtein_pskel::
  sequenceType_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->sequenceType_parser_ = &p;
  }

  void SubstanceProtein_pskel::
  numberOfSubunits_parser (::fhir::integer_pskel& p)
  {
    this->numberOfSubunits_parser_ = &p;
  }

  void SubstanceProtein_pskel::
  disulfideLinkage_parser (::fhir::string_pskel& p)
  {
    this->disulfideLinkage_parser_ = &p;
  }

  void SubstanceProtein_pskel::
  subunit_parser (::fhir::SubstanceProtein_Subunit_pskel& p)
  {
    this->subunit_parser_ = &p;
  }

  void SubstanceProtein_pskel::
  parsers (::fhir::id_pskel& id,
           ::fhir::Meta_pskel& meta,
           ::fhir::uri_pskel& implicitRules,
           ::fhir::code_pskel& language,
           ::fhir::Narrative_pskel& text,
           ::fhir::ResourceContainer_pskel& contained,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::CodeableConcept_pskel& sequenceType,
           ::fhir::integer_pskel& numberOfSubunits,
           ::fhir::string_pskel& disulfideLinkage,
           ::fhir::SubstanceProtein_Subunit_pskel& subunit)
  {
    this->id_parser_ = &id;
    this->meta_parser_ = &meta;
    this->implicitRules_parser_ = &implicitRules;
    this->language_parser_ = &language;
    this->text_parser_ = &text;
    this->contained_parser_ = &contained;
    this->extension_parser_ = &extension;
    this->modifierExtension_parser_ = &modifierExtension;
    this->sequenceType_parser_ = &sequenceType;
    this->numberOfSubunits_parser_ = &numberOfSubunits;
    this->disulfideLinkage_parser_ = &disulfideLinkage;
    this->subunit_parser_ = &subunit;
  }

  SubstanceProtein_pskel::
  SubstanceProtein_pskel (::fhir::DomainResource_pskel* tiein)
  : ::fhir::DomainResource_pskel (tiein, 0),
    SubstanceProtein_impl_ (0),
    sequenceType_parser_ (0),
    numberOfSubunits_parser_ (0),
    disulfideLinkage_parser_ (0),
    subunit_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  SubstanceProtein_pskel::
  SubstanceProtein_pskel (SubstanceProtein_pskel* impl, void*)
  : ::fhir::DomainResource_pskel (impl, 0),
    SubstanceProtein_impl_ (impl),
    sequenceType_parser_ (0),
    numberOfSubunits_parser_ (0),
    disulfideLinkage_parser_ (0),
    subunit_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  // SubstanceProtein_Subunit_pskel
  //

  void SubstanceProtein_Subunit_pskel::
  subunit_parser (::fhir::integer_pskel& p)
  {
    this->subunit_parser_ = &p;
  }

  void SubstanceProtein_Subunit_pskel::
  sequence_parser (::fhir::string_pskel& p)
  {
    this->sequence_parser_ = &p;
  }

  void SubstanceProtein_Subunit_pskel::
  length_parser (::fhir::integer_pskel& p)
  {
    this->length_parser_ = &p;
  }

  void SubstanceProtein_Subunit_pskel::
  sequenceAttachment_parser (::fhir::Attachment_pskel& p)
  {
    this->sequenceAttachment_parser_ = &p;
  }

  void SubstanceProtein_Subunit_pskel::
  nTerminalModificationId_parser (::fhir::Identifier_pskel& p)
  {
    this->nTerminalModificationId_parser_ = &p;
  }

  void SubstanceProtein_Subunit_pskel::
  nTerminalModification_parser (::fhir::string_pskel& p)
  {
    this->nTerminalModification_parser_ = &p;
  }

  void SubstanceProtein_Subunit_pskel::
  cTerminalModificationId_parser (::fhir::Identifier_pskel& p)
  {
    this->cTerminalModificationId_parser_ = &p;
  }

  void SubstanceProtein_Subunit_pskel::
  cTerminalModification_parser (::fhir::string_pskel& p)
  {
    this->cTerminalModification_parser_ = &p;
  }

  void SubstanceProtein_Subunit_pskel::
  parsers (::fhir::string_primitive_pskel& id,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::integer_pskel& subunit,
           ::fhir::string_pskel& sequence,
           ::fhir::integer_pskel& length,
           ::fhir::Attachment_pskel& sequenceAttachment,
           ::fhir::Identifier_pskel& nTerminalModificationId,
           ::fhir::string_pskel& nTerminalModification,
           ::fhir::Identifier_pskel& cTerminalModificationId,
           ::fhir::string_pskel& cTerminalModification)
  {
    this->id_parser_ = &id;
    this->extension_parser_ = &extension;
    this->modifierExtension_parser_ = &modifierExtension;
    this->subunit_parser_ = &subunit;
    this->sequence_parser_ = &sequence;
    this->length_parser_ = &length;
    this->sequenceAttachment_parser_ = &sequenceAttachment;
    this->nTerminalModificationId_parser_ = &nTerminalModificationId;
    this->nTerminalModification_parser_ = &nTerminalModification;
    this->cTerminalModificationId_parser_ = &cTerminalModificationId;
    this->cTerminalModification_parser_ = &cTerminalModification;
  }

  SubstanceProtein_Subunit_pskel::
  SubstanceProtein_Subunit_pskel (::fhir::BackboneElement_pskel* tiein)
  : ::fhir::BackboneElement_pskel (tiein, 0),
    SubstanceProtein_Subunit_impl_ (0),
    subunit_parser_ (0),
    sequence_parser_ (0),
    length_parser_ (0),
    sequenceAttachment_parser_ (0),
    nTerminalModificationId_parser_ (0),
    nTerminalModification_parser_ (0),
    cTerminalModificationId_parser_ (0),
    cTerminalModification_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  SubstanceProtein_Subunit_pskel::
  SubstanceProtein_Subunit_pskel (SubstanceProtein_Subunit_pskel* impl, void*)
  : ::fhir::BackboneElement_pskel (impl, 0),
    SubstanceProtein_Subunit_impl_ (impl),
    subunit_parser_ (0),
    sequence_parser_ (0),
    length_parser_ (0),
    sequenceAttachment_parser_ (0),
    nTerminalModificationId_parser_ (0),
    nTerminalModification_parser_ (0),
    cTerminalModificationId_parser_ (0),
    cTerminalModification_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }
}

#include <assert.h>

namespace fhir
{
  // SubstanceProtein_pskel
  //

  void SubstanceProtein_pskel::
  sequenceType ()
  {
    if (this->SubstanceProtein_impl_)
      this->SubstanceProtein_impl_->sequenceType ();
  }

  void SubstanceProtein_pskel::
  numberOfSubunits ()
  {
    if (this->SubstanceProtein_impl_)
      this->SubstanceProtein_impl_->numberOfSubunits ();
  }

  void SubstanceProtein_pskel::
  disulfideLinkage ()
  {
    if (this->SubstanceProtein_impl_)
      this->SubstanceProtein_impl_->disulfideLinkage ();
  }

  void SubstanceProtein_pskel::
  subunit ()
  {
    if (this->SubstanceProtein_impl_)
      this->SubstanceProtein_impl_->subunit ();
  }

  void SubstanceProtein_pskel::
  post_SubstanceProtein ()
  {
    if (this->SubstanceProtein_impl_)
      this->SubstanceProtein_impl_->post_SubstanceProtein ();
    else
      post_DomainResource ();
  }

  void SubstanceProtein_pskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::fhir::DomainResource_pskel base;
    base::_reset ();

    this->v_state_stack_.clear ();

    this->resetting_ = true;

    if (this->sequenceType_parser_)
      this->sequenceType_parser_->_reset ();

    if (this->numberOfSubunits_parser_)
      this->numberOfSubunits_parser_->_reset ();

    if (this->disulfideLinkage_parser_)
      this->disulfideLinkage_parser_->_reset ();

    if (this->subunit_parser_)
      this->subunit_parser_->_reset ();

    this->resetting_ = false;
  }

  // SubstanceProtein_Subunit_pskel
  //

  void SubstanceProtein_Subunit_pskel::
  subunit ()
  {
    if (this->SubstanceProtein_Subunit_impl_)
      this->SubstanceProtein_Subunit_impl_->subunit ();
  }

  void SubstanceProtein_Subunit_pskel::
  sequence ()
  {
    if (this->SubstanceProtein_Subunit_impl_)
      this->SubstanceProtein_Subunit_impl_->sequence ();
  }

  void SubstanceProtein_Subunit_pskel::
  length ()
  {
    if (this->SubstanceProtein_Subunit_impl_)
      this->SubstanceProtein_Subunit_impl_->length ();
  }

  void SubstanceProtein_Subunit_pskel::
  sequenceAttachment ()
  {
    if (this->SubstanceProtein_Subunit_impl_)
      this->SubstanceProtein_Subunit_impl_->sequenceAttachment ();
  }

  void SubstanceProtein_Subunit_pskel::
  nTerminalModificationId ()
  {
    if (this->SubstanceProtein_Subunit_impl_)
      this->SubstanceProtein_Subunit_impl_->nTerminalModificationId ();
  }

  void SubstanceProtein_Subunit_pskel::
  nTerminalModification ()
  {
    if (this->SubstanceProtein_Subunit_impl_)
      this->SubstanceProtein_Subunit_impl_->nTerminalModification ();
  }

  void SubstanceProtein_Subunit_pskel::
  cTerminalModificationId ()
  {
    if (this->SubstanceProtein_Subunit_impl_)
      this->SubstanceProtein_Subunit_impl_->cTerminalModificationId ();
  }

  void SubstanceProtein_Subunit_pskel::
  cTerminalModification ()
  {
    if (this->SubstanceProtein_Subunit_impl_)
      this->SubstanceProtein_Subunit_impl_->cTerminalModification ();
  }

  void SubstanceProtein_Subunit_pskel::
  post_SubstanceProtein_Subunit ()
  {
    if (this->SubstanceProtein_Subunit_impl_)
      this->SubstanceProtein_Subunit_impl_->post_SubstanceProtein_Subunit ();
    else
      post_BackboneElement ();
  }

  void SubstanceProtein_Subunit_pskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::fhir::BackboneElement_pskel base;
    base::_reset ();

    this->v_state_stack_.clear ();

    this->resetting_ = true;

    if (this->subunit_parser_)
      this->subunit_parser_->_reset ();

    if (this->sequence_parser_)
      this->sequence_parser_->_reset ();

    if (this->length_parser_)
      this->length_parser_->_reset ();

    if (this->sequenceAttachment_parser_)
      this->sequenceAttachment_parser_->_reset ();

    if (this->nTerminalModificationId_parser_)
      this->nTerminalModificationId_parser_->_reset ();

    if (this->nTerminalModification_parser_)
      this->nTerminalModification_parser_->_reset ();

    if (this->cTerminalModificationId_parser_)
      this->cTerminalModificationId_parser_->_reset ();

    if (this->cTerminalModification_parser_)
      this->cTerminalModification_parser_->_reset ();

    this->resetting_ = false;
  }
}

#include <assert.h>

namespace fhir
{
  // Element validation and dispatch functions for SubstanceProtein_pskel.
  //
  bool SubstanceProtein_pskel::
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

        if (n == "sequenceType" &&
            ns == "http://hl7.org/fhir")
          s = 0UL;
        else if (n == "numberOfSubunits" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;
        else if (n == "disulfideLinkage" &&
                 ns == "http://hl7.org/fhir")
          s = 2UL;
        else if (n == "subunit" &&
                 ns == "http://hl7.org/fhir")
          s = 3UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &SubstanceProtein_pskel::sequence_0;
          vd->state = s;
          vd->count = 0;

          this->sequence_0 (vd->state, vd->count, ns, n, true);
        }
        else
        {
          return false;
        }
      }
      else
        return false;
    }

    return true;
  }

  bool SubstanceProtein_pskel::
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

  void SubstanceProtein_pskel::
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

  void SubstanceProtein_pskel::
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


    this->v_state_stack_.pop ();
  }

  void SubstanceProtein_pskel::
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
        if (n == "sequenceType" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->sequenceType_parser_)
            {
              this->sequenceType_parser_->pre ();
              ctx.nested_parser (this->sequenceType_parser_);
            }
          }
          else
          {
            if (this->sequenceType_parser_ != 0)
            {
              this->sequenceType_parser_->post_CodeableConcept ();
              this->sequenceType ();
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
        if (n == "numberOfSubunits" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->numberOfSubunits_parser_)
            {
              this->numberOfSubunits_parser_->pre ();
              ctx.nested_parser (this->numberOfSubunits_parser_);
            }
          }
          else
          {
            if (this->numberOfSubunits_parser_ != 0)
            {
              this->numberOfSubunits_parser_->post_integer ();
              this->numberOfSubunits ();
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
        if (n == "disulfideLinkage" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->disulfideLinkage_parser_)
            {
              this->disulfideLinkage_parser_->pre ();
              ctx.nested_parser (this->disulfideLinkage_parser_);
            }
          }
          else
          {
            if (this->disulfideLinkage_parser_ != 0)
            {
              this->disulfideLinkage_parser_->post_string ();
              this->disulfideLinkage ();
            }

            count++;
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
        if (n == "subunit" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->subunit_parser_)
            {
              this->subunit_parser_->pre ();
              ctx.nested_parser (this->subunit_parser_);
            }
          }
          else
          {
            if (this->subunit_parser_ != 0)
            {
              this->subunit_parser_->post_SubstanceProtein_Subunit ();
              this->subunit ();
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

  // Element validation and dispatch functions for SubstanceProtein_Subunit_pskel.
  //
  bool SubstanceProtein_Subunit_pskel::
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

        if (n == "subunit" &&
            ns == "http://hl7.org/fhir")
          s = 0UL;
        else if (n == "sequence" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;
        else if (n == "length" &&
                 ns == "http://hl7.org/fhir")
          s = 2UL;
        else if (n == "sequenceAttachment" &&
                 ns == "http://hl7.org/fhir")
          s = 3UL;
        else if (n == "nTerminalModificationId" &&
                 ns == "http://hl7.org/fhir")
          s = 4UL;
        else if (n == "nTerminalModification" &&
                 ns == "http://hl7.org/fhir")
          s = 5UL;
        else if (n == "cTerminalModificationId" &&
                 ns == "http://hl7.org/fhir")
          s = 6UL;
        else if (n == "cTerminalModification" &&
                 ns == "http://hl7.org/fhir")
          s = 7UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &SubstanceProtein_Subunit_pskel::sequence_0;
          vd->state = s;
          vd->count = 0;

          this->sequence_0 (vd->state, vd->count, ns, n, true);
        }
        else
        {
          return false;
        }
      }
      else
        return false;
    }

    return true;
  }

  bool SubstanceProtein_Subunit_pskel::
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

  void SubstanceProtein_Subunit_pskel::
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

  void SubstanceProtein_Subunit_pskel::
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


    this->v_state_stack_.pop ();
  }

  void SubstanceProtein_Subunit_pskel::
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
        if (n == "subunit" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->subunit_parser_)
            {
              this->subunit_parser_->pre ();
              ctx.nested_parser (this->subunit_parser_);
            }
          }
          else
          {
            if (this->subunit_parser_ != 0)
            {
              this->subunit_parser_->post_integer ();
              this->subunit ();
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
        if (n == "sequence" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->sequence_parser_)
            {
              this->sequence_parser_->pre ();
              ctx.nested_parser (this->sequence_parser_);
            }
          }
          else
          {
            if (this->sequence_parser_ != 0)
            {
              this->sequence_parser_->post_string ();
              this->sequence ();
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
        if (n == "length" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->length_parser_)
            {
              this->length_parser_->pre ();
              ctx.nested_parser (this->length_parser_);
            }
          }
          else
          {
            if (this->length_parser_ != 0)
            {
              this->length_parser_->post_integer ();
              this->length ();
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
        if (n == "sequenceAttachment" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->sequenceAttachment_parser_)
            {
              this->sequenceAttachment_parser_->pre ();
              ctx.nested_parser (this->sequenceAttachment_parser_);
            }
          }
          else
          {
            if (this->sequenceAttachment_parser_ != 0)
            {
              this->sequenceAttachment_parser_->post_Attachment ();
              this->sequenceAttachment ();
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
        if (n == "nTerminalModificationId" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->nTerminalModificationId_parser_)
            {
              this->nTerminalModificationId_parser_->pre ();
              ctx.nested_parser (this->nTerminalModificationId_parser_);
            }
          }
          else
          {
            if (this->nTerminalModificationId_parser_ != 0)
            {
              this->nTerminalModificationId_parser_->post_Identifier ();
              this->nTerminalModificationId ();
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
        if (n == "nTerminalModification" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->nTerminalModification_parser_)
            {
              this->nTerminalModification_parser_->pre ();
              ctx.nested_parser (this->nTerminalModification_parser_);
            }
          }
          else
          {
            if (this->nTerminalModification_parser_ != 0)
            {
              this->nTerminalModification_parser_->post_string ();
              this->nTerminalModification ();
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
        if (n == "cTerminalModificationId" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->cTerminalModificationId_parser_)
            {
              this->cTerminalModificationId_parser_->pre ();
              ctx.nested_parser (this->cTerminalModificationId_parser_);
            }
          }
          else
          {
            if (this->cTerminalModificationId_parser_ != 0)
            {
              this->cTerminalModificationId_parser_->post_Identifier ();
              this->cTerminalModificationId ();
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
        if (n == "cTerminalModification" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->cTerminalModification_parser_)
            {
              this->cTerminalModification_parser_->pre ();
              ctx.nested_parser (this->cTerminalModification_parser_);
            }
          }
          else
          {
            if (this->cTerminalModification_parser_ != 0)
            {
              this->cTerminalModification_parser_->post_string ();
              this->cTerminalModification ();
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
