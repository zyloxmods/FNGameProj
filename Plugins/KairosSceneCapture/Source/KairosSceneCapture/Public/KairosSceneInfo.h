#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKairosAppMode.h"
#include "KairosAvatarDisplayInfo.h"
#include "KairosSceneInfo.generated.h"

USTRUCT(BlueprintType)
struct KAIROSSCENECAPTURE_API FKairosSceneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKairosAppMode SceneAppMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKairosAvatarDisplayInfo> SpawnedAvatars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BackgroundColor;
    
    FKairosSceneInfo();
};

