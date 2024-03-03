#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnMusicVoiceEventDelegate.h"
#include "FortMusicVoice.generated.h"

UCLASS(Blueprintable)
class UFortMusicVoice : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMusicVoiceEvent OnVoiceStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMusicVoiceEvent OnVoiceFinished;
    
    UFortMusicVoice();
};

