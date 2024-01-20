#pragma once
#include "CoreMinimal.h"
#include "FortQuestDrivenMission.h"
#include "QuestDrivenMissionSubList.generated.h"

USTRUCT(BlueprintType)
struct FQuestDrivenMissionSubList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionSubListName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestDrivenMission> QuestDrivenMissionList;
    
    FORTNITEGAME_API FQuestDrivenMissionSubList();
};

