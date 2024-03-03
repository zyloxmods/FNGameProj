#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "GGWidgetBase.generated.h"

class AFortAthenaMutator_GG;
class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class UGGWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_GG* BaseMutator;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> CachedWorld;
    
public:
    UGGWidgetBase();
};

