#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortBrushSize.h"
#include "FortMultiSizeBrush.h"
#include "Components/Widget.h"
#include "FortMultiSizeImage.generated.h"

UCLASS(Blueprintable)
class UFortMultiSizeImage : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush MultiSizeBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> BrushSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UFortMultiSizeImage();
    UFUNCTION(BlueprintCallable)
    void SetMultiSizeBrush(const FFortMultiSizeBrush& NewMultiSizeBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushSize(TEnumAsByte<EFortBrushSize::Type> NewBrushSize);
    
};

