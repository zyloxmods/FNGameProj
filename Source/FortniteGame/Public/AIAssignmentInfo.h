#pragma once
#include "CoreMinimal.h"
#include "FortAIGoalInfo.h"
#include "AIAssignmentInfo.generated.h"

class UFortAIAssignment;

USTRUCT(BlueprintType)
struct FAIAssignmentInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortAIAssignment> CurrentAssignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIGoalInfo CurrentGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeCurrentGoalWasChosen;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeExitedLastAssignmentOfType[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortAIAssignment> PreviousAssignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIGoalInfo PreviousGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitingForQueryResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressGoalUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReportEnemyGoalSelection;
    
public:
    FORTNITEGAME_API FAIAssignmentInfo();
};

