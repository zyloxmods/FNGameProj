#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFortHomebaseSquadType.h"
#include "GameplayTagContainer.h"
#include "FortHomebaseNodeItemUtilities.generated.h"

class AFortPlayerController;
class UFortHomebaseNodeItem;

UCLASS(Blueprintable)
class UFortHomebaseNodeItemUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortHomebaseNodeItemUtilities();
    UFUNCTION(BlueprintCallable)
    static bool IsSquadSlotUnseen(AFortPlayerController* FortPC, const FName SquadId, const int32 SquadSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHomebaseNodeItemUnseenForTagContainer(AFortPlayerController* FortPC, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    static FString GetHomebaseNodeItemNameForTagContainer(AFortPlayerController* FortPC, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    static UFortHomebaseNodeItem* GetHomebaseNodeItemForTagContainer(AFortPlayerController* FortPC, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    static UFortHomebaseNodeItem* GetHomebaseNodeItemForSquadSlot(AFortPlayerController* FortPC, const FName SquadId, const int32 SquadSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool AreAnyHomebaseNodeItemsUnseenForSquadType(AFortPlayerController* FortPC, const EFortHomebaseSquadType SquadType);
    
    UFUNCTION(BlueprintCallable)
    static bool AreAnyHomebaseNodeItemsUnseenForSquadId(AFortPlayerController* FortPC, const FName SquadId);
    
};

