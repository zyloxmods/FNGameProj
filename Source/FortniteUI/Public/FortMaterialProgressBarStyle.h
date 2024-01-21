#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "FortMaterialProgressBarSectionStyle.h"
#include "FortMaterialProgressBarStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortMaterialProgressBarStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BackgroundColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMaterialProgressBarSectionStyle BarSectionStyles[4];
    
    UFortMaterialProgressBarStyle();
};

