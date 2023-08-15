import jdk.dynalink.beans.StaticClass;
public class Spiralmatrix{
    public static void main(String[] args) {
        int[][] matrix = {
                {1, 5, 6, 5, 8, 3},
                {5, 7, 8, 4, 2, 8},
                {7, 3, 8, 2, 6, 0},
                {4, 8, 9, 0, 4, 7},
                {6, 9, 1, 3, 7, 8},
                {6, 9, 0, 2, 8, 6}
        };
        System.out.println("Original matrix:");
        printMatrix(matrix);
        System.out.println("Spiral Matrix:");
        int[] spiralMatrix = generateSpiralMatrix(matrix);
        printMatrix(spiralMatrix, matrix.length, matrix[0].length);
    }

    public static void printMatrix(int[][] matrix) {
        for (int row = 0; row < matrix.length; row++) {
            for (int col = 0; col < matrix[row].length; col++) {
                System.out.print(matrix[row][col] + " ");
            }
            System.out.println();
        }
    }

    public static void printMatrix(int[] matrix, int rows, int cols) {
        int index = 0;
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                System.out.print(matrix[index++] + " ");
            }
            System.out.println();
        }
    }

    public static int[] generateSpiralMatrix(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int[] spiralMatrix = new int[rows * cols];

        int topRow = 0, bottomRow = rows - 1;
        int leftColumn = 0, rightColumn = cols - 1;
        int index = 0;

        while (topRow <= bottomRow && leftColumn <= rightColumn) {
            // Traverse top row
            for (int col = leftColumn; col <= rightColumn; col++) {
                spiralMatrix[index++] = matrix[topRow][col];
            }
            topRow++;

            // Traverse right column
            for (int row = topRow; row <= bottomRow; row++) {
                spiralMatrix[index++] = matrix[row][rightColumn];
            }
            rightColumn--;

            if (topRow <= bottomRow) {
                // Traverse bottom row
                for (int col = rightColumn; col >= leftColumn; col--) {
                    spiralMatrix[index++] = matrix[bottomRow][col];
                }
                bottomRow--;
            }

            if (leftColumn <= rightColumn) {
                // Traverse left column
                for (int row = bottomRow; row >= topRow; row--) {
                    spiralMatrix[index++] = matrix[row][leftColumn];
                }
                leftColumn++;
            }
        }

        return spiralMatrix;
    }
}
