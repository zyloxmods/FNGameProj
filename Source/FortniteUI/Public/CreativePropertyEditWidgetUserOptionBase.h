#pragma once
#include "CoreMinimal.h"
#include "CreativePropertyEditWidgetBase.h"
#include "CreativePropertyEditWidgetUserOptionBase.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePropertyEditWidgetUserOptionBase : public UCreativePropertyEditWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* OptionDataObject;
    
public:
    UCreativePropertyEditWidgetUserOptionBase();
};

