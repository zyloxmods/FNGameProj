#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "KairosConfig.generated.h"

class AKairosHeroBase;

UCLASS(Blueprintable)
class KAIROSSCENECAPTURE_API UKairosConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHeroScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AKairosHeroBase> AvatarCaptureBlueprint;
    
    UKairosConfig();
};

