#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortPipTest.generated.h"

class UMediaPlayer;
class UStreamMediaSource;

USTRUCT(BlueprintType)
struct FFortPipTest : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStreamMediaSource* StreamMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WidgetClass;
    
    FORTNITEGAME_API FFortPipTest();
};

