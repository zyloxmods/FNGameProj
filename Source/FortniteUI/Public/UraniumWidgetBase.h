#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "UraniumWidgetBase.generated.h"

class AFortAthenaMutator_Uranium;

UCLASS(Blueprintable, EditInlineNew)
class UUraniumWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Uranium* UraniumMutator;
    
public:
    UUraniumWidgetBase();
};

