#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAIEncounterInfoOwnerInterface.h"
#include "FortAIGoalProvider.generated.h"

class UFortAIAssignment;
class UFortAIEncounterInfo;
class UWorld;

UCLASS(Blueprintable)
class UFortAIGoalProvider : public UObject, public IFortAIEncounterInfoOwnerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIAssignment* AssignmentOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* EncounterInfo;
    
public:
    UFortAIGoalProvider();
    UFUNCTION(BlueprintCallable)
    void UpdateGoals();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeGoalProvider(UWorld* ContextWorld, UFortAIAssignment* Assignment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAIEncounterInfo* GetEncounterInfo() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

