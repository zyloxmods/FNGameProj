#pragma once
#include "CoreMinimal.h"
#include "FortCloudSaveItem.h"
#include "FortOutpostCoreInfo.h"
#include "FortOutpostItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortOutpostItem : public UFortCloudSaveItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOutpostCoreInfo outpost_core_info;
    
public:
    UFortOutpostItem();
};

