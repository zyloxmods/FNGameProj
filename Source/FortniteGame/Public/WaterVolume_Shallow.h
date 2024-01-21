#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PhysicsVolume.h"
#include "WaterVolume_Shallow.generated.h"

class USoundBase;

UCLASS(Blueprintable, MinimalAPI)
class AWaterVolume_Shallow : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EntrySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ExitSound;
    
    AWaterVolume_Shallow();
};

