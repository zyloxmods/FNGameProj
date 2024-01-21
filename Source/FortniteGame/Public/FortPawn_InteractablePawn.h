#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAIPawn.h"
#include "FortPawn_InteractablePawn.generated.h"

class AFortPawn;

UCLASS(Blueprintable)
class AFortPawn_InteractablePawn : public AFortAIPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid MyGuid;
    
    AFortPawn_InteractablePawn();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void BlueprintOnInteract(const AFortPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void BlueprintOnBeginInteract();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText BlueprintGetInteractionString(const AFortPawn* InteractingPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BlueprintCanInteract(const AFortPawn* InteractingPawn) const;
    
};

