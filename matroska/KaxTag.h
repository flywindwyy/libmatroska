/****************************************************************************
** libmatroska : parse Matroska files, see http://www.matroska.org/
**
** <file/class MATROSKA_DLL_API description>
**
** Copyright (C) 2002-2010 Steve Lhomme.  All rights reserved.
**
** This file is part of libmatroska.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
** 
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
** 
** You should have received a copy of the GNU Lesser General Public
** License along with this library; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**
** See http://www.matroska.org/license/lgpl/ for LGPL licensing information.**
** Contact license@matroska.org if any conditions of this licensing are
** not clear to you.
**
**********************************************************************/

/*!
	\file
	\version \$Id: KaxTag.h,v 1.9 2004/04/14 23:26:17 robux4 Exp $
	\author Jory Stone     <jcsston @ toughguy.net>
	\author Steve Lhomme   <robux4 @ users.sf.net>
*/
#ifndef LIBMATROSKA_TAG_H
#define LIBMATROSKA_TAG_H

#include "matroska/KaxTypes.h"
#include "ebml/EbmlMaster.h"
#include "ebml/EbmlFloat.h"
#include "ebml/EbmlSInteger.h"
#include "ebml/EbmlUInteger.h"
#include "ebml/EbmlString.h"
#include "ebml/EbmlUnicodeString.h"
#include "ebml/EbmlBinary.h"

using namespace LIBEBML_NAMESPACE;

START_LIBMATROSKA_NAMESPACE

class MATROSKA_DLL_API KaxTag : public EbmlMaster {
	public:
		KaxTag();
		KaxTag(const KaxTag & ElementToClone) :EbmlMaster(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTag)
};

class MATROSKA_DLL_API KaxTagTargets : public EbmlMaster {
	public:
		KaxTagTargets();
		KaxTagTargets(const KaxTagTargets & ElementToClone) :EbmlMaster(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagTargets)
};

class MATROSKA_DLL_API KaxTagGeneral : public EbmlMaster {
	public:
		KaxTagGeneral();
		KaxTagGeneral(const KaxTagGeneral & ElementToClone) :EbmlMaster(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagGeneral)
};

class MATROSKA_DLL_API KaxTagGenres : public EbmlMaster {
	public:
		KaxTagGenres();
		KaxTagGenres(const KaxTagGenres & ElementToClone) :EbmlMaster(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagGenres)
};

class MATROSKA_DLL_API KaxTagAudioSpecific : public EbmlMaster {
	public:
		KaxTagAudioSpecific();
		KaxTagAudioSpecific(const KaxTagAudioSpecific & ElementToClone) :EbmlMaster(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagAudioSpecific)
};

class MATROSKA_DLL_API KaxTagImageSpecific : public EbmlMaster {
	public:
		KaxTagImageSpecific();
		KaxTagImageSpecific(const KaxTagImageSpecific & ElementToClone) :EbmlMaster(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagImageSpecific)
};

class MATROSKA_DLL_API KaxTagTargetTypeValue : public EbmlUInteger {
	public:
		KaxTagTargetTypeValue() :EbmlUInteger(50) {}
		KaxTagTargetTypeValue(const KaxTagTargetTypeValue & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagTargetTypeValue)
};

class MATROSKA_DLL_API KaxTagTargetType : public EbmlString {
	public:
		KaxTagTargetType() {}
		KaxTagTargetType(const KaxTagTargetType & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagTargetType)
};

class MATROSKA_DLL_API KaxTagTrackUID : public EbmlUInteger {
	public:
		KaxTagTrackUID() :EbmlUInteger(0) {}
		KaxTagTrackUID(const KaxTagTrackUID & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagTrackUID)
};

class MATROSKA_DLL_API KaxTagEditionUID : public EbmlUInteger {
	public:
		KaxTagEditionUID() :EbmlUInteger(0) {}
		KaxTagEditionUID(const KaxTagEditionUID & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagEditionUID)
};

class MATROSKA_DLL_API KaxTagChapterUID : public EbmlUInteger {
	public:
		KaxTagChapterUID() :EbmlUInteger(0) {}
		KaxTagChapterUID(const KaxTagChapterUID & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagChapterUID)
};

class MATROSKA_DLL_API KaxTagAttachmentUID : public EbmlUInteger {
	public:
		KaxTagAttachmentUID() :EbmlUInteger(0) {}
		KaxTagAttachmentUID(const KaxTagAttachmentUID & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagAttachmentUID)
};

class MATROSKA_DLL_API KaxTagArchivalLocation : public EbmlUnicodeString {
	public:
		KaxTagArchivalLocation() {}
		KaxTagArchivalLocation(const KaxTagArchivalLocation & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagArchivalLocation)
};

class MATROSKA_DLL_API KaxTagAudioEncryption : public EbmlBinary {
	public:
		KaxTagAudioEncryption() {}
		KaxTagAudioEncryption(const KaxTagAudioEncryption & ElementToClone) :EbmlBinary(ElementToClone){}
		bool ValidateSize() const {return true;} // we don't mind about what's inside

        EBML_CONCRETE_CLASS(KaxTagAudioEncryption)
};

class MATROSKA_DLL_API KaxTagAudioGain : public EbmlFloat {
	public:
		KaxTagAudioGain() {}
		KaxTagAudioGain(const KaxTagAudioGain & ElementToClone) :EbmlFloat(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagAudioGain)
};

class MATROSKA_DLL_API KaxTagAudioGenre : public EbmlString {
	public:
		KaxTagAudioGenre() {}
		KaxTagAudioGenre(const KaxTagAudioGenre & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagAudioGenre)
};

class MATROSKA_DLL_API KaxTagAudioPeak : public EbmlFloat {
	public:
		KaxTagAudioPeak() {}
		KaxTagAudioPeak(const KaxTagAudioPeak & ElementToClone) :EbmlFloat(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagAudioPeak)
};

class MATROSKA_DLL_API KaxTagBibliography : public EbmlUnicodeString {
	public:
		KaxTagBibliography() {}
		KaxTagBibliography(const KaxTagBibliography & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagBibliography)
};

class MATROSKA_DLL_API KaxTagBPM : public EbmlFloat {
	public:
		KaxTagBPM() {}
		KaxTagBPM(const KaxTagBPM & ElementToClone) :EbmlFloat(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagBPM)
};

class MATROSKA_DLL_API KaxTagCaptureDPI : public EbmlUInteger {
	public:
		KaxTagCaptureDPI() {}
		KaxTagCaptureDPI(const KaxTagCaptureDPI & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagCaptureDPI)
};

class MATROSKA_DLL_API KaxTagCaptureLightness : public EbmlBinary {
	public:
		KaxTagCaptureLightness() {}
		KaxTagCaptureLightness(const KaxTagCaptureLightness & ElementToClone) :EbmlBinary(ElementToClone){}
		bool ValidateSize() const {return true;} // we don't mind about what's inside

        EBML_CONCRETE_CLASS(KaxTagCaptureLightness)
};

class MATROSKA_DLL_API KaxTagCapturePaletteSetting : public EbmlUInteger {
	public:
		KaxTagCapturePaletteSetting() {}
		KaxTagCapturePaletteSetting(const KaxTagCapturePaletteSetting & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagCapturePaletteSetting)
};

class MATROSKA_DLL_API KaxTagCaptureSharpness : public EbmlBinary {
	public:
		KaxTagCaptureSharpness() {}
		KaxTagCaptureSharpness(const KaxTagCaptureSharpness & ElementToClone) :EbmlBinary(ElementToClone){}
		bool ValidateSize() const {return true;} // we don't mind about what's inside

        EBML_CONCRETE_CLASS(KaxTagCaptureSharpness)
};

class MATROSKA_DLL_API KaxTagCropped : public EbmlUnicodeString {
	public:
		KaxTagCropped() {}
		KaxTagCropped(const KaxTagCropped & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagCropped)
};

class MATROSKA_DLL_API KaxTagDiscTrack : public EbmlUInteger {
	public:
		KaxTagDiscTrack() {}
		KaxTagDiscTrack(const KaxTagDiscTrack & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagDiscTrack)
};

class MATROSKA_DLL_API KaxTagEncoder : public EbmlUnicodeString {
	public:
		KaxTagEncoder() {}
		KaxTagEncoder(const KaxTagEncoder & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagEncoder)
};

class MATROSKA_DLL_API KaxTagEncodeSettings : public EbmlUnicodeString {
	public:
		KaxTagEncodeSettings() {}
		KaxTagEncodeSettings(const KaxTagEncodeSettings & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagEncodeSettings)
};

class MATROSKA_DLL_API KaxTagEqualisation : public EbmlBinary {
	public:
		KaxTagEqualisation() {}
		KaxTagEqualisation(const KaxTagEqualisation & ElementToClone) :EbmlBinary(ElementToClone){}
		bool ValidateSize() const {return true;} // we don't mind about what's inside

        EBML_CONCRETE_CLASS(KaxTagEqualisation)
};

class MATROSKA_DLL_API KaxTagFile : public EbmlUnicodeString {
	public:
		KaxTagFile() {}
		KaxTagFile(const KaxTagFile & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagFile)
};

class MATROSKA_DLL_API KaxTagInitialKey : public EbmlString {
	public:
		KaxTagInitialKey() {}
		KaxTagInitialKey(const KaxTagInitialKey & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagInitialKey)
};

class MATROSKA_DLL_API KaxTagKeywords : public EbmlUnicodeString {
	public:
		KaxTagKeywords() {}
		KaxTagKeywords(const KaxTagKeywords & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagKeywords)
};

class MATROSKA_DLL_API KaxTagLanguage : public EbmlString {
	public:
		KaxTagLanguage() {}
		KaxTagLanguage(const KaxTagLanguage & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagLanguage)
};

class MATROSKA_DLL_API KaxTagLength : public EbmlUInteger {
	public:
		KaxTagLength() {}
		KaxTagLength(const KaxTagLength & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagLength)
};

class MATROSKA_DLL_API KaxTagMood : public EbmlUnicodeString {
	public:
		KaxTagMood() {}
		KaxTagMood(const KaxTagMood & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagMood)
};

class MATROSKA_DLL_API KaxTagOfficialAudioFileURL : public EbmlString {
	public:
		KaxTagOfficialAudioFileURL() {}
		KaxTagOfficialAudioFileURL(const KaxTagOfficialAudioFileURL & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagOfficialAudioFileURL)
};

class MATROSKA_DLL_API KaxTagOfficialAudioSourceURL : public EbmlString {
	public:
		KaxTagOfficialAudioSourceURL() {}
		KaxTagOfficialAudioSourceURL(const KaxTagOfficialAudioSourceURL & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagOfficialAudioSourceURL)
};

class MATROSKA_DLL_API KaxTagOriginalDimensions : public EbmlString {
	public:
		KaxTagOriginalDimensions() {}
		KaxTagOriginalDimensions(const KaxTagOriginalDimensions & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagOriginalDimensions)
};

class MATROSKA_DLL_API KaxTagOriginalMediaType : public EbmlUnicodeString {
	public:
		KaxTagOriginalMediaType() {}
		KaxTagOriginalMediaType(const KaxTagOriginalMediaType & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagOriginalMediaType)
};

class MATROSKA_DLL_API KaxTagPlayCounter : public EbmlUInteger {
	public:
		KaxTagPlayCounter() {}
		KaxTagPlayCounter(const KaxTagPlayCounter & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagPlayCounter)
};			 

class MATROSKA_DLL_API KaxTagPlaylistDelay : public EbmlUInteger {
	public:
		KaxTagPlaylistDelay() {}
		KaxTagPlaylistDelay(const KaxTagPlaylistDelay & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagPlaylistDelay)
};

class MATROSKA_DLL_API KaxTagPopularimeter : public EbmlSInteger {
	public:
		KaxTagPopularimeter() {}
		KaxTagPopularimeter(const KaxTagPopularimeter & ElementToClone) :EbmlSInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagPopularimeter)
};

class MATROSKA_DLL_API KaxTagProduct : public EbmlUnicodeString {
	public:
		KaxTagProduct() {}
		KaxTagProduct(const KaxTagProduct & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagProduct)
};

class MATROSKA_DLL_API KaxTagRating : public EbmlBinary {
	public:
		KaxTagRating() {}
		KaxTagRating(const KaxTagRating & ElementToClone) :EbmlBinary(ElementToClone){}
		bool ValidateSize() const {return true;} // we don't mind about what's inside

        EBML_CONCRETE_CLASS(KaxTagRating)
};

class MATROSKA_DLL_API KaxTagRecordLocation : public EbmlString {
	public:
		KaxTagRecordLocation() {}
		KaxTagRecordLocation(const KaxTagRecordLocation & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagRecordLocation)
};

class MATROSKA_DLL_API KaxTagSetPart : public EbmlUInteger {
	public:
		KaxTagSetPart() {}
		KaxTagSetPart(const KaxTagSetPart & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagSetPart)
};

class MATROSKA_DLL_API KaxTagSource : public EbmlUnicodeString {
	public:
		KaxTagSource() {}
		KaxTagSource(const KaxTagSource & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagSource)
};

class MATROSKA_DLL_API KaxTagSourceForm : public EbmlUnicodeString {
	public:
		KaxTagSourceForm() {}
		KaxTagSourceForm(const KaxTagSourceForm & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagSourceForm)
};

class MATROSKA_DLL_API KaxTagSubGenre : public EbmlString {
	public:
		KaxTagSubGenre() {}
		KaxTagSubGenre(const KaxTagSubGenre & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagSubGenre)
};

class MATROSKA_DLL_API KaxTagSubject : public EbmlUnicodeString {
	public:
		KaxTagSubject() {}
		KaxTagSubject(const KaxTagSubject & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagSubject)
};

class MATROSKA_DLL_API KaxTagUnsynchronisedText : public EbmlUnicodeString {
	public:
		KaxTagUnsynchronisedText() {}
		KaxTagUnsynchronisedText(const KaxTagUnsynchronisedText & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagUnsynchronisedText)
};

class MATROSKA_DLL_API KaxTagUserDefinedURL : public EbmlString {
	public:
		KaxTagUserDefinedURL() {}
		KaxTagUserDefinedURL(const KaxTagUserDefinedURL & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagUserDefinedURL)
};

class MATROSKA_DLL_API KaxTagVideoGenre : public EbmlBinary {
	public:
		KaxTagVideoGenre() {}
		KaxTagVideoGenre(const KaxTagVideoGenre & ElementToClone) :EbmlBinary(ElementToClone){}
		bool ValidateSize() const {return (GetSize() >= 2);}

        EBML_CONCRETE_CLASS(KaxTagVideoGenre)
};

class MATROSKA_DLL_API KaxTagSimple : public EbmlMaster {
	public:
		KaxTagSimple();
		KaxTagSimple(const KaxTagSimple & ElementToClone) :EbmlMaster(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagSimple)
};

class MATROSKA_DLL_API KaxTagName : public EbmlUnicodeString {
	public:
		KaxTagName() {}
		KaxTagName(const KaxTagName & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagName)
};

class MATROSKA_DLL_API KaxTagLangue : public EbmlString {
	public:
		KaxTagLangue(): EbmlString("und") {}
		KaxTagLangue(const KaxTagLangue & ElementToClone) :EbmlString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagLangue)
};

class MATROSKA_DLL_API KaxTagDefault : public EbmlUInteger {
	public:
		KaxTagDefault() :EbmlUInteger(1) {}
		KaxTagDefault(const KaxTagTrackUID & ElementToClone) :EbmlUInteger(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagDefault)
};

class MATROSKA_DLL_API KaxTagString : public EbmlUnicodeString {
	public:
		KaxTagString() {}
		KaxTagString(const KaxTagString & ElementToClone) :EbmlUnicodeString(ElementToClone) {}

        EBML_CONCRETE_CLASS(KaxTagString)
};

class MATROSKA_DLL_API KaxTagBinary : public EbmlBinary {
	public:
		KaxTagBinary() {}
		KaxTagBinary(const KaxTagBinary & ElementToClone) :EbmlBinary(ElementToClone){}
		bool ValidateSize() const {return true;} // {return (GetSize() >= 0);}

        EBML_CONCRETE_CLASS(KaxTagBinary)
};

END_LIBMATROSKA_NAMESPACE

#endif // LIBMATROSKA_TAG_H
