#include "EmoteBase.h"
#include "Sound/SoundCue.h"


UEmoteBase::UEmoteBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UEmoteBase::OnRebuildGraph(USoundCue& SoundCue) const
{
}


