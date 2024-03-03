#pragma once
#include "CoreMinimal.h"
#include "FortCloudSaveInfo.h"
#include "FortMetadataItem.h"
#include "FortCloudSaveItem.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortCloudSaveItem : public UFortMetadataItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCloudSaveInfo cloud_save_info;
    
public:
    UFortCloudSaveItem();
};

