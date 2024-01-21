#pragma once
#include "CoreMinimal.h"
#include "FortTrapTool.h"
#include "FortDecoTool_ContextTrap.generated.h"

class UFortContextTrapItemDefinition;

UCLASS(Blueprintable)
class AFortDecoTool_ContextTrap : public AFortTrapTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UFortContextTrapItemDefinition* ContextTrapItemDefinition;
    
public:
    AFortDecoTool_ContextTrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

