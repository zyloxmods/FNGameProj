#pragma once
#include "CoreMinimal.h"
#include "GauntletTestController.h"
#include "EFortItemType.h"
#include "Templates/SubclassOf.h"
#include "FortTestControllerTagTestBase.generated.h"

class UFortTaggedAssetTest_Base;
class UFortTaggedTestManager;

UCLASS(Blueprintable)
class UFortTestControllerTagTestBase : public UGauntletTestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTaggedTestManager* TestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemType> AssetTypesToTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTaggedAssetTest_Base> TargetTestBaseClass;
    
};

