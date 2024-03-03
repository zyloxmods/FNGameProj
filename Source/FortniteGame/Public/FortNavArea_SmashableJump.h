#pragma once
#include "CoreMinimal.h"
#include "FortNavArea.h"
#include "FortNavArea_SmashableJump.generated.h"

UCLASS(Blueprintable)
class UFortNavArea_SmashableJump : public UFortNavArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Strength;
    
    UFortNavArea_SmashableJump();
};

