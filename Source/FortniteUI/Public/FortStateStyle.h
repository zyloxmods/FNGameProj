#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMultiSizeBrush.h"
#include "FortStateStyle.generated.h"

USTRUCT(BlueprintType)
struct FFortStateStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PrimaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryColor;
    
    FORTNITEUI_API FFortStateStyle();
};

