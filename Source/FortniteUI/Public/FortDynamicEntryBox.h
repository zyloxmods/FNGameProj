#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/DynamicEntryBox.h"
#include "Slate/WidgetTransform.h"
#include "EDynamicEntryPatternDirection.h"
#include "FortDynamicEntryBox.generated.h"

UCLASS(Blueprintable)
class FORTNITEUI_API UFortDynamicEntryBox : public UDynamicEntryBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicEntryPatternDirection PatternDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RenderOpacityPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetTransform> RenderTransformPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> RenderTransformPivotPattern;
    
public:
    UFortDynamicEntryBox();
};

