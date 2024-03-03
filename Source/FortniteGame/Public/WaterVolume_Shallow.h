#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectVolume.h"
#include "WaterVolume_Shallow.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class AWaterVolume_Shallow : public AGameplayEffectVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EntrySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ExitSound;
    
    AWaterVolume_Shallow();
};

