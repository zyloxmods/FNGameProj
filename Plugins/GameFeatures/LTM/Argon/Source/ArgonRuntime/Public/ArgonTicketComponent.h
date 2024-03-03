#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArgonTicketOnIsNearToPlayerChangedDelegate.h"
#include "ArgonTicketComponent.generated.h"

class AFortAthenaMutator_Argon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARGONRUNTIME_API UArgonTicketComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Argon* ArgonMutator;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArgonTicketOnIsNearToPlayerChanged OnIsNearToPlayerChanged;
    
    UArgonTicketComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearToPlayer() const;
    
};

