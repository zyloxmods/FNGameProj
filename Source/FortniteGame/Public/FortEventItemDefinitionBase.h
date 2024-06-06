#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortEventItemDefinitionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortEventItemDefinitionBase : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisallowedEventTag;
    
public:
    UFortEventItemDefinitionBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    void CreateCalendarPayload();
    
};

