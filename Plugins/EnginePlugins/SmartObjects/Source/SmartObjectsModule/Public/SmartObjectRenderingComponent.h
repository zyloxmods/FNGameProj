#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "ESOReferenceDrawingMode.h"
#include "SmartObjectRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SMARTOBJECTSMODULE_API USmartObjectRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESOReferenceDrawingMode ReferenceDrawingMode;
    
public:
    USmartObjectRenderingComponent();
};

