#pragma once
#include "CoreMinimal.h"
#include "FortClientAnnouncementQueue.generated.h"

class AFortClientAnnouncement;

USTRUCT(BlueprintType)
struct FFortClientAnnouncementQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortClientAnnouncement*> Announcements;
    
    FORTNITEGAME_API FFortClientAnnouncementQueue();
};

