#pragma once
#include "CoreMinimal.h"
#include "EBuildingAttachmentType.h"
#include "RadialOptionData.h"
#include "ItemCategoryOptionData.generated.h"

USTRUCT(BlueprintType)
struct FItemCategoryOptionData : public FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplatePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingAttachmentType BuildingAttachmentType;
    
    FORTNITEUI_API FItemCategoryOptionData();
};

