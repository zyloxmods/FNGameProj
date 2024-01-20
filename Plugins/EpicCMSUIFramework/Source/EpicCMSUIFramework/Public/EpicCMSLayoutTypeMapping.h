#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EpicCMSLayoutTypeMapping.generated.h"

class UEpicCMSLayoutBase;

USTRUCT(BlueprintType)
struct FEpicCMSLayoutTypeMapping : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEpicCMSLayoutBase> LayoutType;
    
    EPICCMSUIFRAMEWORK_API FEpicCMSLayoutTypeMapping();
};

