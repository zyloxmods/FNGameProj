#pragma once
#include "CoreMinimal.h"
#include "BacchusHUDElement.h"
#include "FortBacchusSpeakerWrapper.generated.h"

class UFortVoiceSpeakerContainerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortBacchusSpeakerWrapper : public UBacchusHUDElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceSpeakerContainerWidget* WrappedSpeakers;
    
public:
    UFortBacchusSpeakerWrapper();
};

