#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VersionedCostOverride.h"
#include "FortTrackedObjectCostOverrideListData.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FFortTrackedObjectCostOverrideListData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVersionedCostOverride> Overrides;
    
    FORTNITEGAME_API FFortTrackedObjectCostOverrideListData();
};

