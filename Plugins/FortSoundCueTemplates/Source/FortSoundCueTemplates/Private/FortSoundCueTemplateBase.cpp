#include "FortSoundCueTemplateBase.h"
#include "Sound/SoundCue.h"


UFortSoundCueTemplateBase::UFortSoundCueTemplateBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

#if WITH_EDITOR

void UFortSoundCueTemplateBase::OnRebuildGraph(USoundCue& SoundCue) const
{
}
#endif // WITH_EDITOR
