#pragma once
#include "CoreMinimal.h"
#include "IslandInspectorCommand.h"
#include "IslandInspectorScreenshotCommand.generated.h"

UCLASS(Blueprintable)
class UIslandInspectorScreenshotCommand : public UIslandInspectorCommand {
    GENERATED_BODY()
public:
    UIslandInspectorScreenshotCommand();
};

