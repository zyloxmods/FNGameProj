#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SrirachaRanchComponentTemplateWrapper.generated.h"

class UMediaSoundComponent;

UCLASS(Blueprintable)
class USrirachaRanchComponentTemplateWrapper : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* MediaSoundPlayerTemplate;
    
    USrirachaRanchComponentTemplateWrapper();
};

