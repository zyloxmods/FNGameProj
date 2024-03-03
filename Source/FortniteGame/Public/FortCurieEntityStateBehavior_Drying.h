#pragma once
#include "CoreMinimal.h"
#include "FortCurieEntityStateBehavior.h"
#include "FortCurieEntityStateBehavior_Drying.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortCurieEntityStateBehavior_Drying : public UFortCurieEntityStateBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DryingRate;
    
public:
    UFortCurieEntityStateBehavior_Drying();
};

