#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortActivatablePanelLTM.generated.h"

class AFortGameplayMutator;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortActivatablePanelLTM : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortGameplayMutator> MutatorClassToWaitFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortGameplayMutator* Mutator;
    
public:
    UFortActivatablePanelLTM();
};

