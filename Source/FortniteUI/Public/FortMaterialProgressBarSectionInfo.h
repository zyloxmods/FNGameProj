#pragma once
#include "CoreMinimal.h"
#include "FortMaterialProgressBarSectionStyle.h"
#include "FortMaterialProgressBarSectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortMaterialProgressBarSectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMaterialProgressBarSectionStyle SectionStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percent;
    
    FORTNITEUI_API FFortMaterialProgressBarSectionInfo();
};

