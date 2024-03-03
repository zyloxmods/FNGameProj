#pragma once
#include "CoreMinimal.h"
#include "FortCurieElementBehavior.h"
#include "Templates/SubclassOf.h"
#include "FortCurieElementBehavior_Electricity.generated.h"

class AFortCurieBGA;

UCLASS(Abstract, Blueprintable)
class UFortCurieElementBehavior_Electricity : public UFortCurieElementBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortCurieBGA> NovaActorClass;
    
public:
    UFortCurieElementBehavior_Electricity();
};

