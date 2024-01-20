#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "RadialOptionData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SoftIcon;
    
    FORTNITEUI_API FRadialOptionData();
};

